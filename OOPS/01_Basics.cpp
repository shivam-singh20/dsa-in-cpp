#include<bits/stdc++.h>
using namespace std;

class student
{
    public: //Access modifier by default it is private.
        string name;
        int roll_number, age;
        string grade;
};

class a
{
    char c; 
    int b;
    char h;
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<endl;

    student s1; //student is user defined data_type and s1 is an object for student.
    s1.name = "Shivam";
    s1.roll_number = 27;
    s1.age = 22;
    s1.grade = "A";

    cout<<s1.name<<" "<<s1.roll_number<<" "<<s1.age<<" "<<s1.grade;

    student s2;
    s2.name = "Mayank";
    s2.roll_number = 21;
    s2.age = 20;
    s2.grade = "A+";

    cout<<s2.name<<" "<<s2.roll_number<<" "<<s2.age<<" "<<s2.grade;
}