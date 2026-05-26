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
 
 vecInt arr(2*n);
 for(auto&x : arr) cin>>x;

 vector<vector<int>> allPalindromes;

 for(int i = 0; i<2*n; i++){
    int l = i, r = i;
    while(l >= 0 && r < n && arr[l] == arr[r]){
        vecInt t (arr.begin()+l, arr.begin()+r);
        allPalindromes.push_back(t);
        l--, r++;
    }
    l = i, r = i+1;

    while(l >= 0 && r < n && arr[l] == arr[r]){
        vecInt t (arr.begin()+l, arr.begin()+r);
        allPalindromes.push_back(t);
        l--, r++;
    }
 }
 int ans = 0;

 for(vector<int> i : allPalindromes){
    vecInt st(i.size()/2, 0);
    for(int j = 0; j<st.size(); j++){
        st[i[j]]++;
    }
    for(int x = 0; x < st.size(); x++){
        if(st[x] == 0){
            ans = max(ans, x);
        }
    }
 }
 cout<<ans<<endl;
}
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}