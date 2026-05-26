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
   bool isIncreasing = true;

   for(auto&x : arr) cin>>x;
   
   for(int i = 0; i<n-1; i++){
      if(arr[i] > arr[i+1]) isIncreasing = false;
}
   if(isIncreasing) cout<<n<<endl;
   else cout<<1<<endl;
}
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}
