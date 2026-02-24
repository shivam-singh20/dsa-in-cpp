#include <iostream>
using namespace std;

// Inheritance - The capability of a class to derive property and characteristics from anoter class;

class Human{ // Base class or parent class
    string religion, color;
    protected:
        string name;
        char gender;
        int age;
        float height, weight;

    // public:
    // Human(){ //Ist constructor called; //IInd destructor called
    //     cout<<"I am human"<<endl;
    // }
};

class student: public Human{ // Derived class or child class
    int student_id, marks;
    string department;

    public:
    // student(){ // IInd constructor called; //Ist destructor called
    //     cout<<"I am a student"<<endl;
    // }

    //Initializing values
    student(int student_id, string name, char age, string department, int marks, float height, float weight)
    {
        this->student_id = student_id;
        this->name = name;
        this->age = age;
        this->department = department;
        this->marks = marks;
        this->height = height;
        this->weight = weight;
    }

    void display()
    {
        cout<<student_id<<" "<<name<<" "<<age<<" "<<department<<" "<<marks<<" "<<height<<" "<<weight;
    }
};

int main()
{
    student s1(101,"Shivam",22,"Computer",99,5.10,75.6);
    s1.display();
}