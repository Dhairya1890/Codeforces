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

   int k = arr[0] - 1;

   for(int i = 0; i<n; i++){
    k = gcd(k, abs(arr[i] - (i+1)));
   }
   cout<<k<<endl;
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}