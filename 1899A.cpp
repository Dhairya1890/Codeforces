/*Game with Integers*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3 == 0) cout<<"Second\n";
        else if(n%3 <= 2) cout<<"First\n";
        else cout<<"Second\n";
    }
}