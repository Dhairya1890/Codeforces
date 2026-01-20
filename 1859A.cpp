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
        vector<int> b, c;
        int max = -1;
        for(int i : arr) if(max < i) max = i;
        for(int i : arr){
            if(i >= max) c.push_back(i);
            else b.push_back(i);
        }
    if(b.size() == 0) cout<<-1<<endl;
    else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i : b) cout<<i<<" ";
        cout<<endl;
        for(int i : c) cout<<i<<" ";
        cout<<endl;
    }
}
}

int main(){
    helper();
}