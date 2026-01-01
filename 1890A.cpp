#include<iostream>
#include<unordered_map>
using namespace std;

void sol(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int, int> freq;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    bool allSame = true;
    if(n<=2) cout<<"YES\n";
    else{
        for(int i = 0; i<n-1; i++){
        if(arr[i] != arr[i+1]) allSame = false;
    }
    if(freq.size() == 2){
        for(auto const& pair : freq){
            if(pair.second == n/2){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
    }
    else if(allSame) cout<<"YES\n";
    else cout<<"NO\n";
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}