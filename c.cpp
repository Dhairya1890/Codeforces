#include<bits/stdc++.h>
using namespace std;


void helper(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        if(y == 0){
            if(x % 3 == 0) cout<<"YES\n";
            if(x % 6 == 0) cout<<"YES\n";
        }
        else if(x < 2) cout<<"NO\n";
        else if(x <= y) cout<<"NO\n";
        else if(x%3 == 0 && x%2 != 0 && x%4 != 0 && y != 0) cout<<"NO\n";
        else if(x%4 == 0 && y<0 && (x/4)*(-1) == y) cout<<"YES\n";
        else if(x%2 == 0 &&  (x/2)*1 == y) cout<<"YES\n";
        else if(x%3 == 0 && x%abs(y) == 0 && abs(y)!=1) cout<<"YES\n";
        else{
            //Reach x first
            int i = 0, j = 0;
            while(i != x && i+3 <= x){
                i+=3;
            }
            while(i < x && i+2 <= x){
                i += 2;
                j += 1;
            }
            while(i < x && i+4 <= x){
                i += 4;
                y -= 1;
            }
            if(i == x && j == y) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
int main(){
    helper();
}