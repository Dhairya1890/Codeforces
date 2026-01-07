#include<bits/stdc++.h>
using namespace std;

void helper(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> ans(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int maxElement = INT_MIN;
    for(int i = arr.size()-1; i>=0; --i){
        // if(arr[i] > maxElement) maxElement = arr[i], ans[i] = 0;
        // else if(maxElement == arr[i]) ans[i] = 1;
        // else ans[i] = maxElement-arr[i]+1;
        if(arr[i] > maxElement) maxElement = arr[i], ans[i] = 0;
        else if(maxElement == arr[i]) ans[i] = 1;
        else ans[i] = maxElement-arr[i]+1;
    }
    for(int i : ans){
        cout<<i<<" ";
    }
}

int main(){
    helper();
}