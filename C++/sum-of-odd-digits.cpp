#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int sum=0;
    cout<<"Enter the Number : ";
    cin>>n;
    while(n>0){
        int last_digit=n%10;
        if(last_digit%2!=0)
        {
             sum+= n%10;
        }
       
        n/=10;
    }
    cout<<"Sum of the digits is : "<<sum<<endl;
    return 0;
}