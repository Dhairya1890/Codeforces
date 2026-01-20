#include<bits/stdc++.h>
using namespace std;

void help(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;

        vector<int> ss(x);
        int x1 = x;
        for(int i = 0; i<x; i++){
            if(x1 % k != 0){
            ss[i] = x1;
            }
            x1--;
        }
        for(int i : ss) cout<<i<<" ";
        cout<<endl;
        int res = 0;
        vector<int> ans;
        int i = 0;
        while(res != x){
            if(find(ss.begin(), ss.end(), (x-ss[i])) != ss.end()){
                res += ss[i];
                ans.push_back(ss[i]);
            }
            if(i < ss.size()-1) i++;
        }
        cout<<ans.size()<<endl;
        for(int i : ans){
            cout<<i<<" ";
        }
    }
}

int main(){
    help();
}