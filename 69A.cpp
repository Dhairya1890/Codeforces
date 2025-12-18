/*Young Physicist
* input : 3
          4 1 7  // --> Xi
          -2 4 -1 // --> Yi
          1 -5 -3 // --> Zi
  output: NO
  Explaination - sum of Xi, Yi, Zi != 0
  input : 3
          3 -1 7
          -5 2 -4 
          2 -1 -3
  output : YES 
  Explaination - Sum == 0
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sumX = 0, sumY = 0, sumZ = 0;
    for(int i = 0; i<n; i++){
        int x, y, z;
        cin>>x;
        sumX += x;
        cin>>y;
        sumY += y;
        cin>>z;
        sumZ += z;
    }
    if(sumX == 0 && sumY == 0 && sumZ == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}