// #include<bits/stdc++.h>
// using namespace std;


// void helper(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n, k;
//         cin>>n>>k;

//         if(n%2 == 0 || (n-k) % 2 == 0) cout<<"YES\n";
//         else cout<<"NO\n";
//     }
// }
// int main(){
//     helper();
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    int ans = 0;
	    
	    ans += y/2;
	    
	    
	    
	    ans += min(x,z);
	    
	    cout<<ans<<endl;
	}

}
