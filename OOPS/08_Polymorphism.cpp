#include <iostream>
using namespace std;

// Polymorphism - It enables one entity to take many forms.

// Types of Polymorphism - Compile Time(Function overloading, Operator Overloading) and Run Time(Overriding)

class Area {
    public:
    //Function Overloading - Same name of function but different parameters
    int calculateArea(int r)
    {
        return 3.14*r*r;
    }

    int calculateArea(int l, int b)
    {
        return l*b;
    }
};

class Complex {
    int real, img;

    public:

    Complex(){

    }

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i";
    }

    Complex operator +(Complex &C)
    {
        Complex ans;
        ans.real = real + C.real;
        ans.img = img + C.img;
        return ans;
    }
};

int main()
{
    // Function Overloading
    // Area a1;
    // cout<<a1.calculateArea(4)<<endl;
    // cout<<a1.calculateArea(3,4);

    //Operator Overloading
    Complex C1(4,2);
    Complex C2(5,4);

    Complex C3 = C1 + C2;
    C3.display();
}