#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

    public:

    Customer(){ //Constructor
        cout<<"I am a constructor"<<endl;
    }

    ~Customer(){ //Destructor
        cout<<"I am a destructor"<<endl;
    }
};

int main()
{
    Customer c1;

}