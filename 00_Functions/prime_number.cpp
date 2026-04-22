#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            cout<<n<<" is not a Prime number.";
            return 0;
        }
    }
    cout<<n<<" is a Prime number.";   
}