#include<bits/stdc++.h>
using namespace std;

bool equalDigits(int n){
    unordered_map<int,int> freq;
    while(n != 0){
        freq[n%10]++;
        n /= 10;
    }
    for(auto const& pair : freq) {
        if(pair.second >= 2) return true;
    }
    return false;
}
void helper(){
    int n;
    cin>>n;
    n += 1;
    while(equalDigits(n)){
        n += 1;
    }
    cout<<n<<endl;
}

int main(){
    helper();
}