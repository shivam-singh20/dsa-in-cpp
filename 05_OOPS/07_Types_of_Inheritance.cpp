#include <iostream>
using namespace std;

// Types of Inheritance - Single, Multilevel, Multiple, Hierarchical, Hybrid

// Single Inheritance - Simple Inheritance
class Vehical {
    protected:
    int tyres;
    string type, color;
    int model_no, engine_no;
};

class Car: public Vehical {
    string name;
    int manufacturing_date;

    public:
    Car(){
        cout<<"This is a car class";
    }
};

// Multilevel Inheritance - One derived class inherits properties from another base class and another derived 
//                          class inherits properties from 1st derived class as Base class.

// For example - Son inherits properties from his father and father inherits properties from grandfather.

class Person {
    protected:
    string name;

    public:
    void introduce()
    {
        cout<<"My name is "<<name<<endl;
    }

};


class Employee: public Person { //Inherits property from Person class
    protected:
    int salary;

    public:
    void monthly_salary()
    {
        cout<<"My monthly salary is: "<<salary<<endl;
    }
};

class Manager: public Employee { //Inherits property from Person, Employee class
    protected:
    string department;

    public:
    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void my_department()
    {
        cout<<"I am in "<<department<<" department";
    }

    void display()
    {
        cout<<name<<" "<<salary<<" "<<department<<endl;
    }
};

// Multiple Inheritance - One single Derived class inherits properties from multiple base class.

class Gaming { // Base class
    public:
    void display()
    {
        cout<<"I am a Gamer."<<endl;
    }
};

class Teaching { // Base class
    public:
        void display()
        {
            cout<<"I am a Teacher."<<endl;
        }
};

class Content_Creation { // Base class
    public: 
        void display()
        {
            cout<<"I am a content creator."<<endl;
        }
};


class Youtube : public Gaming, public Teaching, public Content_Creation {
    public:
        void display()
        {
            cout<<"I am a Youtuber.";
        }
};


// Hierarchical Inheritance - Multiple derived class inherits properties from single base class.

class Human {
    protected:
        string name;
        int age;
        float height;
};

class Student : public Human {
    int student_id, roll_no;

    public:
        Student(int student_id, string name, int age, int roll_no, float height)
        {
            this->student_id = student_id;
            this->name = name;
            this->age = age;
            this->roll_no = roll_no;
            this->height = height;
        }

        void get_info()
        {
            cout<<"Student_id : "<< student_id <<" Name : "<< name <<" Age : "<<age<<" Roll_no : "<<roll_no<<" Height : "<< height<<endl;
        }
};

class Teacher : public Human {
    int teacher_id;
    double salary;

    public:
        Teacher(int teacher_id, string name, int age, int salary, float height)
        {
            this->teacher_id = teacher_id;
            this->name = name;
            this->age = age;
            this->salary = salary;
            this->height = height;
        }

        void get_info()
        {
            cout<<"Teacher_id : "<< teacher_id <<" Name : "<< name <<" Age : "<<age<<" Salary : "<<salary<<" Height : "<< height<<endl;
        }
};

int main()
{
    Manager m1("Shivam", 1000, "HOD");
    m1.display();
    m1.introduce();
    m1.monthly_salary();
    m1.my_department();
}