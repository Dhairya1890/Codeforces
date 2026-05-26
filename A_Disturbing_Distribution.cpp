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

   long long ans = 0;
   long long mod = 676767677;
   bool allOne = true;

   for(int i : arr){
    if(i != 1){
        ans += i;
        allOne = false;
    }
   }

   if(allOne) ans = 1;
   if(arr[n-1] == 1 && !allOne) ans += 1;
   cout<<ans%mod<<endl;
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}