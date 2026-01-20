#include<bits/stdc++.h>
using namespace std;

void helper(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int arr[n];
        for(int i = 0; i<n; i++) cin>>arr[i];
        int ans = 0;

        if(!is_sorted(arr, arr+n));
        else{
            int minPrefix = INT_MAX;

            for(int i = 0; i<n-1; i++){
               int diff = abs(arr[i+1] - arr[i]);
               minPrefix = min(minPrefix, diff);
            }

            ans = minPrefix/2 + 1;
        }
        cout<<ans<<endl;
    }
}

int main(){
    helper();
}