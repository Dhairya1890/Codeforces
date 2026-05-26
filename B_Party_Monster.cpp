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

 stack<char> st;

 for(char c : s){
    if(c == '(' && !st.empty() && st.top() != ')') st.push('(');
    else if(c == '(' && st.empty()) st.push('(');
    else if(c == '(' && !st.empty() && st.top() == ')') st.pop();
    else if(c == ')' && st.empty()) st.push(')');
    else if(c == ')' && ( st.top() != '(' || st.empty()) ) st.push(')');
    else if(c == ')' && !st.empty() && st.top() == '(') st.pop();
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