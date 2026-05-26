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
   int maxElement = 0;
   for(int i = 0; i<n; i++){
    int x;
    cin>>x;
    arr.push_back(x);
    if(x > maxElement) maxElement = x;
   }

   int count = 0;

   for(int x : arr){
    if(x ==  maxElement) count++;
   }
   cout<<count<<endl;
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}