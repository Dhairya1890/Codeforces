#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l, a, b;
        cin>>l>>a>>b;
        int ans = 0;
        
        for(int i = 0; i<l*2; i++){
            ans = max(ans, (a+b)%l);
            a = (a+b)%l;
        }
        cout<<ans<<endl;
    }
    return 0;
}