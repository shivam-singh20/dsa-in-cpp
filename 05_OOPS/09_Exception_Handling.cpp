#include<iostream>
using namespace std;

// Designing a banking system

class banking{
    string name;
    int acc_no;
    float balance;

    public:
        banking(string name,int acc_no, float balance)
        {
            this->name = name;
            this->acc_no = acc_no;
            this->balance = balance;
        }

        void deposit(float amount)
        {
            if(amount < 0)
                throw "Invalid amount entered";
            
            balance += amount;
            cout<<amount<<" Rupees credited sucessfully"<<endl;
        }

        void withdraw(float amount)
        {
            if(amount<0 || amount>balance)
                throw "Invalid amount entered";

            balance -= amount;
            cout<<amount<<" Rupees debited sucessfully"<<endl;
        }

        void display()
        {
            cout<<name<<" "<<acc_no<<" "<<balance;
        }
};

int main()
{
    banking b1("Shivam", 101, 1000);
    
    try{
        b1.withdraw(100);
        b1.display();
    }
    

    catch(const char *e)
    {
        cout<<"Exception occured: "<<e;
    }
}