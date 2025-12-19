/*Halloumi Boxes                                                  *
* Input : 4 4                                                     *
*         6 4 2 1                                                 *
* Output: YES                                                     *
* Explaination : return "YES" if boxes can be sorted by reversing *
*                a subarray of max length - k                     *
* Approach - Find the first element index that should be present  *
             if the array is sorted, if the index is less         *
*            given k, reversing is possible                       *
*/                                                                

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i<n; i++) cin>>arr[i];

        if(k > 1) cout<<"YES\n";
        else{
            bool sorted = true;
            for(int i = 1; i<n; i++){
                if(arr[i] < arr[i-1]){
                    sorted = false;
                    break;
                }
            }
            cout<<(sorted? "YES\n" : "NO\n");
        }
    }
    return 0;
}