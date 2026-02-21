#include<bits/stdc++.h>
using namespace std;


void helper(){
    int t;
    cin>>t;
    
    while(t--){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> copy;

    
    int ans = -1;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    copy = arr;

    for(int i = 0; i<=256; i++){
        for(int j = 0; j<n; j++){
            arr[j] = arr[j] ^ i;
        }
        int res = arr[0];
    for(int k = 1; k<n; k++){
        res = res ^ arr[k];
    }
    if(res == 0){
        ans = i;
        break;
    }
    else{
        arr = copy;
    }
    }
    cout<<ans<<endl;
    }
}
int main(){
    helper();
}