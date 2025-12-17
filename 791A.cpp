/*Bear and Big Brother
* input : 4 7
* output: 2
* Explaination : After 2 Years Bob's weight will be 4*3 = 12, 12*3 = 36                      *
*                Limak's weight will be 7*2 = 14 , 14*2 = 28                                 *
*                return number of years after which Bob's weight is strictly > Limak's weight*
*/

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int years = 0;
    while(a <= b){
        a *= 3;
        b *= 2;
        years++;
    }
    cout<<years;
    return 0;
}