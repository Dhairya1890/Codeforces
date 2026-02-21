#include<bits/stdc++.h>
using namespace std;


void helper(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++) cin>>arr[i];
        for(int i = 0; i<n; i++){
            cout<< n+1 - arr[i]<<" ";
        }
        cout<<endl;
    } 
}
int main(){
    helper();
}

// Why this works 
// We have a range of numbers from 1-n, what we are doing is 
// finding the differnce to make every number equal, such that 
// on adding that number, the permutation condition remains true

// where can we find a number such that on subtracting it we get diff in range of 1 to n and also get every number equall
// It can be the upper bound or n+1, as adding each element to n+1 will make every element equal, as well as ensure that the number we are adding does not violates the rule of permutation