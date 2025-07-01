#include<iostream>
#include<string>
using namespace std;

class Teacher{
//properties //attributes
public:   //access modifiers---private, protected
    string name;
    string dept;
    string subject;
    int salary;

//Member function  //methods
    void remove_dept(string dept_name){
        dept = dept_name;
    }    
};

int main()
{
    Teacher t1; //object created
    t1.name = "Shivam";
    t1.dept = "Computer";
    t1.subject = "Maths";
    t1.salary = 250000;
    cout<<t1.name<<endl;
}