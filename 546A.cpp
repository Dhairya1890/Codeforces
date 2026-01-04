#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,w;
    cin>>n>>k>>w;

    int cost = n*(w*(w+1))/2;

    cout<<max(0, cost-k);
}