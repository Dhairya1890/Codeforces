#include<iostream>
using namespace std;

bool isSubstring(string s1, string s2){
    int i = 0, j = 0;
    while(j < s2.length() && i < s1.length()){
        if(s1[i] == s2[j]){
            i++;
            j++;
        }
        else{
            i = i-j+1;
            j = 0;
        }
    }
    if(j == s2.length()) return true;
    else return false;
}

void helper(){
    int s1, s2;
    cin>>s1>>s2;
    string str1, str2;
    cin>>str1>>str2;

    int ans = 0;
    int i = 0;
    bool found = false;
    for(i = 0; i<6; i++){
        if(isSubstring(str1,str2)){
            found = true;
            break;
        }
        str1 += str1;
        ans++;
    }
    if(found) cout<<ans<<endl;
    else cout<<-1<<endl;
    }
    

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    // string s1,s2;
    // cin>>s1>>s2;
    // cout<<isSubstring(s1,s2);
}