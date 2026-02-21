#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(n <= 1) cout<<n<<endl;
        else{

        int i = 0, j = n-1, ans = n;
        while(i < j){
            if((s[i] == '1' && s[j] == '0') || (s[i] == '0' && s[j] == '1')) i++, j--, ans -= 2;
            else break;
        }
        cout<<ans<<endl;
    }
    }
}