#include<bits/stdc++.h>
using namespace std;

void helper(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    int res = 0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i] > h) res += 2;
        else res += 1;
    }
    cout<<res;
}

int main(){
    helper();
}