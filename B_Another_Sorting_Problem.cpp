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
 vecInt arr(n); 
 for(auto& x : arr) cin>>x;
 bool isAsc = true;
 int first = 0;
 int sec = 0;
 ll diff = 0;
 int firstSec = -1;
 for(int i = 0; i<n-1; i++){
    if(arr[i] > arr[i+1]) {
        isAsc = false, first = i, sec = i+1;
        diff = max(diff, (ll) arr[first]-arr[sec]);
        if(firstSec == -1) firstSec = i+1;
    }
 }

 if(isAsc) cout<<"YES\n";
 
 else{
    for(int i = firstSec; i<n-1; i++){
        if(i-1 >= 0 && arr[i] < arr[i-1]){
        arr[i] += diff;
        }   
    }
    if(arr[n-1] < arr[n-2]) arr[n-1] += diff;
    isAsc = true;
    for(int i = 0; i<n-1; i++){
        if(arr[i] > arr[i+1]) {
            isAsc = false;
            break;
        }
    }

    if(isAsc) cout<<"YES\n";
    else cout<<"NO\n";
 }
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}