#include<bits/stdc++.h>
using namespace std;

void helper(){
    int n;
    cin>>n;
    int arr[n];
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
     cin>>arr[i]; 
     if(abs(arr[i]) < min) min = abs(arr[i]);
     if(arr[i] == 0) {
        min = 0;
        break;
     }
    }
    cout<<abs(min);
}

int main(){
    helper();
}