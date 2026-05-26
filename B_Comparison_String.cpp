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
   string s;
   cin>>n;
   cin>>s;

   int maxLen = 0;
   int len = 0;

   for(int i = 0; i<n; i++){
    char c = s[i];

    for(int j = i; j<n; j++){
        if(s[j] == c) len++, i = j;
        else break;
    }
    maxLen = max(maxLen, len);
    len = 0;
   }
   cout<<maxLen+1<<endl;
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}