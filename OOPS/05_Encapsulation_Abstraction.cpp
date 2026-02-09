#include <bits/stdc++.h>
using namespace std;

// Encapsulation - Wrapping up of data into a single unit, while controlling access to them.
// Abstraction - Displaying only essential data and hiding details related to code 
class customer {
    string name;
    int account_number, balance;

    public:

    customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    void deposit(int amount){
        if(amount<0){
            return;
        }
        balance += amount;
    }

    void withdraw(int amount)
    {
        if(amount>balance)
            return;
        balance -= amount;
    }

    void display(){
        cout<<name<<endl;
        cout<<account_number<<endl;
        cout<<balance<<endl;
    }

};

int main()
{
    customer c1("Shivam", 101, 1000);
    c1.display();

    c1.deposit(-10);
    c1.display();

    c1.withdraw(1000);
    c1.display();

}