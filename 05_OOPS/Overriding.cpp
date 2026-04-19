#include<iostream>
using namespace std;

// Overriding - Means redefining a function of the base class in the derived class with same fuction name, 
//              same parameter list and same return type.

class Base {
    public:
    void display()
    {
        cout<<"I am a Base class.";
    }
};

class Derived : public Base{
    public:
    void display()
    {
        cout<<"I am a Derived class.";
    }
};

int main()
{
    Derived d;
    d.display();
    cout<<endl;
    Derived d1;
    d1.Base :: display(); // Scope Resolution
}