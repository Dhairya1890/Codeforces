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

   string s;
   cin>>s;
   string copy = s;

   int countMin = 0, countMax = 0;
   int countZeros = 0, countOnes = 0;

   for(int i = 1; i<n-1; i++){
    if(s[i-1] == '1' && s[i+1] == '1'){
        s[i] = '1';
    }
   }

   for(char c : s){
    if(c == '1') countOnes++;
   }

   for(int i = 1; i<n-1; i++){
    if(s[i-1] == '1' && s[i+1] == '1'){
        s[i] = '0';
    }
   }
   for(char c : s){
    if(c == '1') countZeros++;
   }

   cout<<countZeros<<" "<<countOnes<<endl;
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}
