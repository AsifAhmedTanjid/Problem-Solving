#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    float CGPA;

public:
    void getPercentage()
    {
        cout << (CGPA * 25) << "%" << endl;
    }

    void setName(string nameVal)
    {
        name = nameVal;
    }
    void setCGPA(float CGPAVal)
    {
        CGPA = CGPAVal;
    }

    string getName()
    {
        return name;
    }
    float getCGPA()
    {
        return CGPA;
    }
};

int main()
{

    Student s1;
    s1.setName("Asif");
    s1.setCGPA(4.98);
    cout << s1.getName() << " " << s1.getCGPA() << endl;

    return 0;
}