#include <iostream>
using namespace std;

// Types of Inheritance - Single, Multilevel, Multiple, Hierarchical, 

// Single Inheritance
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

// Multilevel Inheritance
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

// Multiple Inheritance


int main()
{
    Manager m1("Shivam", 1000, "HOD");
    m1.display();
    m1.introduce();
    m1.monthly_salary();
    m1.my_department();
}