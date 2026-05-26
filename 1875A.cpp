#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vecInt;
typedef vector<long long> vecLL;

void helper(){
   
int t;
cin>>t;

while(t--){
   long long a,b,c;
   cin>>a>>b>>c;

   vecLL arr(c);

   for(auto &x : arr) cin>>x;


   long long ans = b;

   for(int i = 0; i<c; i++){
    ans += min(a-1, arr[i]);
   }

   cout<<ans<<endl;
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}