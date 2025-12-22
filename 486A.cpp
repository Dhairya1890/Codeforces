    #include<iostream>
    using namespace std;
     
    int main(){
        long long n;
        cin>>n;
        
        if(n%2 == 0) cout<<n/2;
        else{
            long long sum = (n-1)/2;
            sum += -(n);
            cout<<sum;
        }
        return 0;
    }