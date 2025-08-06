#include <bits/stdc++.h>
using namespace std;

// Defining a class which has a by default access modifier private
class Student
{
    public:
        string name;
        int age, roll_number;
        string grade;
};

// Accessing private classes
class Student1
{
    string name;
    int age, roll_number;
    string grade;

    // Setter and Getter
    public:
        void set_name(string n)
        {
            if(n.size() == 0)
            {
                cout<<"Invalid entry";
                return;
            }
            name = n;
        }

        void set_age(int n)
        {
            if(n<=0 || n>=100)
            {
                cout<<"Invalid age";
                return;
            }
            age = n;
        }

        void set_roll(int r)
        {
            roll_number = r;
        }

        void set_grade(string g)
        {
            grade = g;
        }

        void get_name()
        {
            cout<<name<<endl;
        }

        int get_age()
        {
            return age;
        }

};

int main (){
    Student s1; // where student is user defined data_type and s1 is an object
    s1.name = "Shivam";
    s1.age = 21;
    s1.roll_number = 27;
    s1.grade = "A+";
    
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll_number<<endl;
    cout<<s1.grade<<endl;

    Student s2;

    s2.name = "Mayank";
    s2.age = 19;
    s2.roll_number = 21;
    s2.grade = "A";

    cout<<s2.name<<endl;
    cout<<s2.age<<endl;
    cout<<s2.roll_number<<endl;
    cout<<s2.grade<<endl;

// Accessing private class with help of function
    Student1 s3;
    s3.set_name("");
    s3.set_age(500);
    s3.get_name();
    cout<<s3.get_age();
    

    return 0;
}