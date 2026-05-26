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

 string st = "";

 for(char c : s){
    if(!st.empty() && st.back() == c){
        st.pop_back();
    }
    else{
        st.push_back(c);
    }
 }

 if(st.empty()) cout<<"YES\n";
 else cout<<"NO\n";
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}