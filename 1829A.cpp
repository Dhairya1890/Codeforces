#include<bits/stdc++.h>
using namespace std;


void helper(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++) cin>>arr[i];
        
        int ans = 0;
        int MaxCount = 0;

        int i = 0;
        for(int k = 0; k<n; k++){
            int currCount = 0;
            while(k < n && arr[k] == 0){
                currCount++;
                k++;
                
            }
            MaxCount = max(MaxCount, currCount);
            if(arr[k] == 1){
                currCount = 0;
            }
        }
        cout<<MaxCount<<endl;
    }
}
int main(){
    helper();
}