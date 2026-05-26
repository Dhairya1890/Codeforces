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
   for(auto &x : arr) cin>>x;

   if(n%2 == 0){
	cout<<2<<endl;
	cout<<1<<" "<<n<<endl;
	cout<<1<<" "<<n<<endl;
   }
   else{
	cout<<4<<endl;
	cout<<1<<" "<<n-1<<endl;
	cout<<1<<" "<<n-1<<endl;
	cout<<n-1<<" "<<n<<endl;
	cout<<n-1<<" "<<n<<endl;
   }
}

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}