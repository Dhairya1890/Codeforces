#include<bits/stdc++.h>
using namespace std;

void helper(){
    long long n;
    cin>>n;
    int count = 0;
    int digits = 0;
    while(n != 0){
        int temp = n%10;
        if(temp == 4 || temp == 7) count++;
        digits++;
        n /= 10;
    }
    if(count == 4 || count == 7) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    helper();
}