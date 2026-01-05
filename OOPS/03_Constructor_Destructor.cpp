#include <iostream>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;

    public:

    //Default constructor
    customer() //Name of the constructor is same as class name
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

    void display()
    {
        cout<<name<<"  "<<account_number<<"  "<<balance<<endl;
    }

};

int main()
{
    customer A1; //Constructor is invoked automatically at object creation.
    A1.display();

    customer A2("Shivam",102,1500);
    A2.display();

    customer A3("Shivam",103,4000);
    A3.display();

    customer A4("Shivam",104,5000);
    A4.display();
    
    
}