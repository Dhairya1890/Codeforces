#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int temp = n;
    while(k--){
        if(temp%10 != 0) n--;
        else n /= 10;
        temp = n;
    }
    cout<<n;
}