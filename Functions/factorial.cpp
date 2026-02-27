#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int fact = 1;

    if(n==0)
        cout<<"Factorial of 0 is: "<< 1;
    else if(n<0)
        cout<<"";
    else
    {
        for(int i=n; i>1; i--)
        {
            fact = fact * i;
        }
        cout<<"Factorial of "<<n<<" is: "<<fact;
    }
}