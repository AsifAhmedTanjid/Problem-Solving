#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    
    int res=0;
    cout<<"Enter the Number : ";
    cin>>n;
    int remain=n;
    while(remain>0){
        int last_digit=remain%10;
        res=res*10+last_digit;
        remain=remain/10;
 
    }  
    if(n==res){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    

    return 0;
}