#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vecInt;
typedef vector<long long> vecLL;

void helper(){
   
int t;
cin>>t;

while(t--){
 int n;
 cin>>n;
 
 vecInt arr(n);

 for(auto&x : arr) cin>>x;

 int i = 0, j = 1; 

 vecInt by6, by2, by3, neither;

 for(int i : arr){
    if(i%6 == 0) by6.push_back(i);
    else if(i%2 == 0) by2.push_back(i);
    else if(i%3 == 0) by3.push_back(i);
    else neither.push_back(i);
 }

 for(int i : by6) cout<<i<<" ";
 for(int i : by2) cout<<i<<" ";
 for(int i : neither) cout<<i<<" ";
 for(int i : by3) cout<<i<<" ";
 cout<<"\n";

}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}