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

// access modifiers - Private , Protectd, Public

class access_modifiers{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

    void access()
    {
        a = 10; // can access private within the class
        b = 20; // can access protected within the class
        c = 30; // can access public within the class
    }
};

// External code

int main()
{
    access_modifiers a1;
    // a1.a; X cannot access private class in an external code
    // a1.b; X cannot access protected class in an external code
    a1.c; // can access public class in an external code



    customer c1("Shivam", 101, 1000);
    c1.display();

    c1.deposit(-10);
    c1.display();

    c1.withdraw(1000);
    c1.display();

}