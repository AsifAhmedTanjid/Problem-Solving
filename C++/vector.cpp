#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec={1,2,3,4,77};
    vector<int>::reverse_iterator it;
    for(it=vec.rbegin(); it!=vec.rend();it++){
        cout<<*(it)<<endl;
    }
     cout<<"------------------------------"<<endl;
    vector<int>::iterator it1;
    for(it1=vec.begin(); it1!=vec.end();it1++){
        cout<<*(it1)<<endl;
    }
     cout<<"------------------------------"<<endl;
    for(auto it1=vec.begin(); it1!=vec.end();it1++){
        cout<<*(it1)<<endl;
    }
    cout<<"------------------------------"<<endl; //with auto keyword we do not need to define the iterator for forward or reverse. it automatically detects
    for(auto it1=vec.rbegin(); it1!=vec.rend();it1++){
        cout<<*(it1)<<endl;
    }
    return 0;
}