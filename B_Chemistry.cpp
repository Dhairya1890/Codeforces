#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vecInt;
typedef vector<long long> vecLL;

void helper(){
   
int t;
cin>>t;

while(t--){
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;

   unordered_map<char,int> freq;

   for(char c : s){
    freq[c]++;
   }

   int remove = -1;
   int charToRemove = 0;
   for(auto const& pair : freq){
    if(pair.second %2 != 0) {
      remove++;
      if(remove != 0){
      charToRemove += 1;
      }
    }
   }

   if(k - charToRemove < 0) cout<<"NO\n";
   else cout<<"YES\n";
}
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}