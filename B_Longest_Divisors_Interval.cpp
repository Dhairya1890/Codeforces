#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vecInt;
typedef vector<long long> vecLL;

void helper(){
   
int t;
cin>>t;

while(t--){
   long long n;
   cin>>n;

   for(int i = 1; i<n; i++){
      if(n%i == 0) continue;
      else{
         cout<<i-1<<endl;
         break;
      }
   }
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}