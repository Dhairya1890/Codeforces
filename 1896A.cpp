/*Jagged Swaps*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool sorted = true;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(i >= 1){
                if(arr[i] < arr[i-1]) sorted = false;
            }
        }
        if(sorted) cout<<"YES\n";
        else if(arr[0] != 1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}