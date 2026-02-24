#include<bits/stdc++.h>
using namespace std;

class student
{
    public: //Access modifier by default it is private.
        string name;
        int roll_number, age;
        string grade;
};

// Class for accessing the size of object as empty class size is 1
class a
{
    char c;
    int b;
    char h;
};

//Dynamically allocating an object
class employee
{
    public:
    string name;
    int employee_id;
    int salary;
};

int main()
{
    //3rd class
    employee *e1 = new employee; //employee is a user defined data_type
    (*e1).name = "Shivam";
    (*e1).employee_id = 101;
    (*e1).salary = 5000000;

    cout<<"Name: "<<e1 -> name<<endl;
    cout<<"Employee_id: "<<e1 -> employee_id<<endl;
    cout<<"Salary: "<<e1 -> salary<<endl;

    
    //2nd class
    a obj;
    cout<<sizeof(obj)<<endl;

    // 1st class
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