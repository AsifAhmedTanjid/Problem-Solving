#include <bits/stdc++.h>
using namespace std;


int binarySearch(int *arr,int n,int key){
        int start =0;
        int end=n-1;
        while(start<=end){
            int mid=(start+end)/2;

            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                start =mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
        
}
int main(){

    int arr[]={1,12,33,45,51,77,87,91,100};
    int n= sizeof(arr)/sizeof(int);
    // cout<<n<<endl;
    cout<<binarySearch(arr,n,101);

    return 0;
}