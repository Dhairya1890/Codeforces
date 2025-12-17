/*String Task
* input : tour
* output: .t.r
* Explaination : Given string consisting of uppercase and lowercase                   *
                 1) Delete all vowels                                                 *
                 2) insert '.' before each consonant                                  *
                 3) replace all uppercase consonants with corresponding lowercase ones*
*/

/*Libraries used - <cctype> - for tolower() and toupper()
*                  tolower() - takes an int argument and 
                               returns int value of lowercase letter
                   *Not Used - toupper() - takes int arg and return uppercase int
                                value
*/

#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (char c : s){
        char l =  tolower(c);
        if(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'y'){
            continue;
        }
        else cout<<"."<<l;
    }
    return 0;
}