#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int isPrime=true;
    cout<<"enter you number: ";
    cin>>n;

    for (int i = 2; i < n ; i++)
    {
        if(n%i==0){
            isPrime = false;
            break;
        }

    }
    
    if(isPrime){
        cout<<"Your number is prime"<<endl;
    

    }
    else     cout<<"Your number is not prime"<<endl;
    
    return 0;
}