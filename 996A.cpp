#include<bits/stdc++.h>
using namespace std;

void helper(){
    int n;
    cin>>n;
    int res = 0;
    while(n != 0){
        if(n%100 != n) {
            res++;
            n -= 100;
        }
        else if(n%20 != n){
            
            res++;
            n -= 20;
        }
        else if(n%10 != n){
            res++;
            n -= 10;
        }
        else if(n%5 != n){
            res++;
            n -= 5;
        }
        else if(n%1 != n){
            res++;
            n -= 1;
        }
    }
    cout<<res<<endl;
}

int main(){
    helper();
}