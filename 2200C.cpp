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

   unordered_map<char, int> freq;

   for(char c : s){
    freq[c]++;
   }
   bool cont = true;

   for(auto const&pair : freq){
    if(pair.second %2 != 0){
        cout<<"NO\n";
        cont = false;     
    }
   }
   if(cont){
    for(int i = 0; i<n-1; i++){
        if(s[i] == s[i+1]){
            s[i] = '*', s[i+1] = '*';
        }
    }
    for(int i = 0; i<n; i++){
        int countStars = 0;
        if(s[i] == '*') continue;
        for(int j = i+1; j<n; j++){
            if(s[i] == s[j] && i+1 == j) s[i] = '*', s[j] = '*';
            else if(s[i] == s[j] && countStars > 0){
                s[i] = '*', s[j] = '*';
            }
            else if(s[j] == '*') countStars++;
        }
    }
    bool isValid = true;
    for(char c : s){
        if(c != '*'){
            isValid = false;
            break;
        }
    }
    if(isValid) cout<<"YES\n";
    else cout<<"NO\n";
   }
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}