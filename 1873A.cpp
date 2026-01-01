#include<bits/stdc++.h>
using namespace std;

void helper(){
    vector<vector<char>> arr(10,vector<char>(10));
    int total = 0;
    int score[10][10] = {{1,1,1,1,1,1,1,1,1,1},{1,2,2,2,2,2,2,2,2,1},{1,2,3,3,3,3,3,3,2,1},{1,2,3,4,4,4,4,3,2,1},{1,2,3,4,5,5,4,3,2,1},{1,2,3,4,5,5,4,3,2,1}, {1,2,3,4,4,4,4,3,2,1}, {1,2,3,3,3,3,3,3,2,1}, {1,2,2,2,2,2,2,2,2,1},{1,1,1,1,1,1,1,1,1,1}};
    for(int i = 0; i<10; i++){
        for(int k = 0; k<10; k++){
            cin>>arr[i][k];
            if(arr[i][k] == 'X'){
               total += score[i][k];
        }
    }
}
    cout<<total<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}