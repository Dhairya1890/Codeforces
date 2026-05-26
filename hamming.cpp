#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

// ─────────────────────────────────────────
//  STEP 1: Find number of redundant bits
// ─────────────────────────────────────────
int findRedundantBits(int m) {
    int r = 1;
    while (pow(2, r) < m + r + 1)
        r++;
    return r;
}

// ─────────────────────────────────────────
//  STEP 2: Place data bits into codeword
//          (redundant bits at power-of-2 positions)
// ─────────────────────────────────────────
vector<int> placeDataBits(vector<int> data, int r) {
    int m = data.size();
    int totalLen = m + r;
    vector<int> code(totalLen + 1, 0); // 1-indexed

    int j = 0;
    for (int i = 1; i <= totalLen; i++) {
        // Skip power-of-2 positions (reserved for redundant bits)
        if ((i & (i - 1)) != 0) { // not a power of 2
            code[i] = data[j++];
        }
    }
    return code;
}

// ─────────────────────────────────────────
//  STEP 3: Calculate and set redundant bits
// ─────────────────────────────────────────
void calcRedundantBits(vector<int>& code, int r) {
    int totalLen = code.size() - 1;

    for (int i = 0; i < r; i++) {
        int pos = pow(2, i); // position of this redundant bit (1, 2, 4, 8...)
        int parity = 0;

        for (int j = pos; j <= totalLen; j++) {
            // Check if pos-th bit of j is set
            if (j & pos)
                parity ^= code[j];
        }
        code[pos] = parity;
    }
}

// ─────────────────────────────────────────
//  STEP 4: Detect and correct error
// ─────────────────────────────────────────
int detectAndCorrect(vector<int>& code, int r) {
    int totalLen = code.size() - 1;
    int errorPos = 0;

    for (int i = 0; i < r; i++) {
        int pos = pow(2, i);
        int parity = 0;

        for (int j = pos; j <= totalLen; j++) {
            if (j & pos)
                parity ^= code[j];
        }

        if (parity != 0)
            errorPos += pos; // accumulate failed parity positions
    }

    return errorPos; // 0 means no error
}

// ─────────────────────────────────────────
//  UTILITY: Print the codeword nicely
// ─────────────────────────────────────────
void printCode(const vector<int>& code, int r) {
    int totalLen = code.size() - 1;
    cout << "\n  Position: ";
    for (int i = 1; i <= totalLen; i++)
        cout << i << "  ";
    cout << "\n  Bits:     ";
    for (int i = 1; i <= totalLen; i++) {
        cout << code[i] << "  ";
    }
    cout << "\n  Type:     ";
    for (int i = 1; i <= totalLen; i++) {
        if ((i & (i - 1)) == 0) cout << "R" << "  "; // redundant
        else cout << "D" << "  ";                      // data
    }
    cout << "\n";
}

// ─────────────────────────────────────────
//  MAIN
// ─────────────────────────────────────────
int main() {
    cout << "╔══════════════════════════════════════╗\n";
    cout << "║      HAMMING CODE SIMULATOR          ║\n";
    cout << "╚══════════════════════════════════════╝\n\n";

    // ── Input ──
    int m;
    cout << "Enter number of data bits: ";
    cin >> m;

    vector<int> data(m);
    cout << "Enter " << m << " data bits (space separated): ";
    for (int i = 0; i < m; i++)
        cin >> data[i];

    // ── Encoding ──
    int r = findRedundantBits(m);
    cout << "\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    cout << "  Data bits (m)      = " << m << "\n";
    cout << "  Redundant bits (r) = " << r << "\n";
    cout << "  Total code length  = " << m + r << "\n";
    cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";

    vector<int> code = placeDataBits(data, r);
    calcRedundantBits(code, r);

    cout << "\n[SENDER] Encoded Hamming Codeword:";
    printCode(code, r);

    // ── Simulate error ──
    cout << "\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    cout << "Simulate an error? (1 = Yes, 0 = No): ";
    int simulate;
    cin >> simulate;

    if (simulate) {
        int errPos;
        cout << "Enter bit position to flip (1 to " << m + r << "): ";
        cin >> errPos;
        code[errPos] ^= 1; // flip the bit
        cout << "\n[CHANNEL] Codeword after error at position " << errPos << ":";
        printCode(code, r);
    }

    // ── Decoding ──
    cout << "\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    int errPos = detectAndCorrect(code, r);

    if (errPos == 0) {
        cout << "\n[RECEIVER] ✅ No error detected! Data received correctly.\n";
    } else {
        cout << "\n[RECEIVER] ❌ Error detected at position: " << errPos << "\n";
        code[errPos] ^= 1; // correct it
        cout << "[RECEIVER] ✅ Error corrected! Corrected codeword:";
        printCode(code, r);
    }

    // ── Extract original data ──
    cout << "\n[RECEIVER] Extracted data bits: ";
    for (int i = 1; i < (int)code.size(); i++) {
        if ((i & (i - 1)) != 0) // not power of 2 → data bit
            cout << code[i] << " ";
    }
    cout << "\n\n";

    return 0;
}