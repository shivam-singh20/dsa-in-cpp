#include <iostream>
using namespace std;

// When constructor is created multiple times with different parameters then it is called overloaded constructor.

class customer
{
    string name;
    int account_number;
    int balance;

    public:

    //Default constructor - It is automatically created by the compiler when an object is created. We can manually create it also like created below after that compiler will not create the constructor for other object of same class we have to manually create it according to our needs.
    customer() //Name of the constructor is same as class name.
    {
        name = "Shivam";
        account_number = 101;
        balance = 2000;
    }

    
    //Parameterized constructor
    // customer(string a, int b, int c) //Parameters are present
    // {
    //     name = a;
    //     account_number = b;
    //     balance = c;
    // }
    
    customer(string name, int account_number,int balance)
    {
        this -> name = name;
        this -> balance = balance;
        this -> account_number = account_number; //this pointer will point the class parameters present in customer class
    }


    //inline constructor
    // inline customer(string a, int b, int c) : name(a), account_number(b), balance(c){

    // }


    //Copy constructor - It is also created by compiler by default
    customer(customer &b) //We have to pass by reference
    {
        name = b.name;
        account_number = b.account_number;
        balance = b.balance;
    }

    void display()
    {
        cout<<name<<"  "<<account_number<<"  "<<balance<<endl;
    }

};

int main()
{
    customer A1; //Constructor is invoked automatically at the time of object creation.
    A1.display(); //Default constructor

    customer A2("Shivam",102,1500);
    A2.display(); //Parameterized constructor

    customer A3("Shivam",103,4000);
    A3.display(); //Parameterized constructor

    customer A4("Shivam",104,5000);
    A4.display(); //Inline constructor

    customer A5(A3); //By default you can perform this also for copy constructor
    A5.display(); // Copy constructor

    customer A6;
    A6 = A2;
    A6.display();

    customer B1(A4);
    B1.display();
    
}