#include<bits/stdc++.h>
using namespace std;

void helper(){
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        vector<int> arr(b);
        vector<int> ans;
        for(int i = 0; i<b; i++) cin>>arr[i];
        ans.push_back(arr[0]);
        for(int i = 0; i<arr.size()-1; i++){
            if(arr[i+1] >= arr[i]) {
                ans.push_back(arr[i+1]);
            }
            else{
                ans.push_back(1);
                ans.push_back(arr[i+1]);
            }
        }
        cout<<ans.size()<<endl;
        for(int x : ans) cout<<x<<" ";
        cout<<endl;
    }
}

int main(){
    helper();
}