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
   
   for(auto& x : arr) cin>>x;

   int ans = 0;

   for(int i = 0; i<n-1; i++){
    if(max(arr[i], arr[i+1]) - min(arr[i], arr[i+1])  == gcd(arr[i], arr[i+1])) ans++;
   }

   cout<<ans<<endl;
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}