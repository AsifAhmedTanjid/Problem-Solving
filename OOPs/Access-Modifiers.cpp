#include <bits/stdc++.h>
using namespace std;

class Student{

public:
    string name;
    float cgpa;

    void getPercentage(){
        cout<<(cgpa*25)<<"%"<<endl;

    }


};

int main(){

    Student s1;
    s1.cgpa=3.98;
    s1.name="Asif";
    cout<<"Name: "<<s1.name<<" CGPA: "<<s1.cgpa<<endl;
    s1.getPercentage();
    return 0;
}