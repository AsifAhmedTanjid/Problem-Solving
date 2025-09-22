#include <bits/stdc++.h>
using namespace std;
class Car{
    string name;
    string color;

    public:
        Car(){
            cout<<"contruction without param"<<endl;
        }

        Car(string name,string color){
            this->name=name;
            this->color=color;
            cout<<"constructor with param"<<endl;
        }

        string getName(){
            return name;
        }
        string getColor(){
            return color;
        }
};

int main(){

    Car c1;
    Car c2("BMW","BLACK");
    Car c3("Rolls Royce", "White");
    cout<<c2.getColor()<<c2.getName()<<endl;
    return 0;
}