#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vecInt;
typedef vector<long long> vecLL;

void helper(){
   
int t;
cin>>t;

while(t--){
    int n,k;
    cin>>n>>k;
    
    vecInt arr(n);
    for(auto &x : arr) cin>>x;

    sort(arr.begin(), arr.end());

    int longest_len = 0, len = 1;

    for(int i = 0; i<n-1; i++){
        if(arr[i+1]-arr[i] <= k) len++;
        else{
            longest_len = max(longest_len, len);
            len = 1;
        }
    }
    longest_len = max(longest_len, len);
    cout<<(n - longest_len)<<"\n";
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}