#include<bits/stdc++.h>
using namespace std;


void helper(){
    int t;
    cin>>t;
    while(t--){

        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d < b) cout<<-1<<endl;
        else{
            int count = 0;

            while(b < d){
                a++, b++;
                count++;
            }
            if(a < c) count = -1;
            while(a > c){
                a--;
                count++;
            }

            cout<<count<<endl;
        }
    }
}
int main(){
    helper();
}