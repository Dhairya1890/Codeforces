#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int arr[2*n+1];
    for(int i = 0; i<2*n+1; i++) cin>>arr[i];

    for(int i = 0; i<2*n+1; i++){
        if((i+1)%2 == 0 && k > 0){
            if(arr[i]-1 > arr[i-1] && arr[i]-1 > arr[i+1]){
            arr[i]--;
            k--;
            }
        }
    }
    for(int i : arr) cout<<i<<" ";
}