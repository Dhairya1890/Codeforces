#include<bits/stdc++.h>
using namespace std;

void helper(){
    string s;
    cin>>s;
        int step = 0;
        for(int i = 0; i<s.length(); i++){
            if(i == 0 || i == s.length()-1){
                if (s[i] == 'u') step++;
                s[i] = 's';
            }
            else if(s[i] == 'u'){
            if(s[i-1] == 'u' && s[i+1] == 'u') {
                step += 2;
                s[i+1] = 's';
            }
            else if(s[i-1] == 's' && s[i+1] == 'u'){
                step += 1;
                s[i+1] = 's';
            }
            else if(s[i-1] =='u' && s[i+1] == 's') step++;
        }
        }
        cout<<step<<endl; 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}