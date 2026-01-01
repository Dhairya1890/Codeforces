/*Line Trip*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];

    int minVol = arr[0];
    for(int i = 0; i<n-1; i++){
        minVol = max(minVol, arr[i+1] - arr[i]);
    }
    if((x-arr[n-1])*2 > minVol) minVol = (x-arr[n-1])*2;
    cout<<minVol<<"\n";
}
}