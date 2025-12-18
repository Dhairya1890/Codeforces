/*Football
Input : 001001
Output : NO
Explaination : String should have consequetive 7 1's OR 0's.

*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s.length() <= 6) cout<<"NO"<<endl;
    else{
        int c0 = 0, c1 = 0;
        int cu0 = 0, cu1 = 0;
        int s1 = 0, s2 = 0;
        while(s1<s.length()){
            if(s[s1] == '0'){
                cu0++;
                c0 = max(c0, cu0);
            }
            else cu0 = 0;
            s1++;
        }
        while(s2<s.length()){
            if(s[s2] == '1'){
                cu1++;
                c1 = max(c1, cu1);
            }
            else{
                cu1 = 0;
            }
            s2++;
        }
        if(c0 >= 7 || c1 >= 7) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}