#include<bits/stdc++.h>
using namespace std;

void helper(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++) cin>>arr[i];
        int odd = 0, even = 0;
        for(int i : arr){
            if(i%2 == 0) even += i;
            else odd += i;
        } 
        if(even%2 == 0 && odd%2 == 0) cout<<"Yes\n";
        else cout<<"No\n";
    }
}

int main(){
    helper();
}