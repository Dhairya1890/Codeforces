/* Helpful Maths *
*  Input : 3+2+1+3+4
*  Output: 1+2+3+3+4
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> res;
    for(char c : s){
        if(c != '+') res.push_back(c-'0');
    }
    sort(res.begin(), res.end());
    string ans = "";
    for(int i = 0; i<res.size()-1; i++){
        cout<<res[i]<<"+";
    }
    cout<<res[res.size()-1];
    return 0;
}