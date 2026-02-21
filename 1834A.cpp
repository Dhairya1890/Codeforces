#include<bits/stdc++.h>
using namespace std;

void helper(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int c1 = 0, c2 = 0;
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
            if(arr[i] == 1) c1++;
            else c2++;
        }

        if(c1 == c2){
            if(c2%2 == 0) cout<<0<<endl;
            else if(c2%2 != 0) cout<<1<<endl;
        }
        else{
            if(c1 > c2){
                if(c2%2 == 0) cout<<0<<endl;
                else cout<<1<<endl;
            }
            else if(c1 < c2){
                int ans = 0;
                while(c1 < c2){
                    c1++;
                    c2--;
                    ans++;
                }
                if(c2%2 != 0) cout<<ans+1<<endl;
                else cout<<ans<<endl;
            }
        }
   }
}

int main(){
    helper();
}