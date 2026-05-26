#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vecInt;
typedef vector<long long> vecLL;

int dx[4] = {1, -1,-1, 1}, dy[4] = {1,1,-1,-1};


void helper(){
   
int t;
cin>>t;

while(t--){
   int x,y;
   int x1, y1;
   int x2, y2;

   cin>>x>>y;
   cin>>x1>>y1;
   cin>>x2>>y2;

 
   // calculate 8 possible positions for king and queen

   set<pair<int,int>> kings, queens;

   for(int i = 0; i<4; i++){
      kings.insert({x1 + dx[i]*x, y1 + dy[i]*y});
      kings.insert({x1 + dx[i]*y, y1 + dy[i] * x});

      queens.insert({x2 + dx[i] * x, y2 + dy[i] * y});
      queens.insert({x2 + dx[i] * y, y2 + dy[i] * x});
   }

   int ans = 0;

   for(auto pos : kings){
      if(queens.find(pos) != queens.end()) ans++;
   }

   cout<<ans<<endl;
}
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

helper();
 
}


/*Notes - We are given possible moves of the knight, we need to
find a position (x,y) such that it can fork the king at position (xk, yk) 
and queen at position (xq, yq). So a possible solution would be to find all the positions of knight
such that it can reach the king and queen both, 
1. can we place the knight at middle of king and queen --> depends on the moves of knight

Expected Time Complexity - O(1) or O(log N)


*/
