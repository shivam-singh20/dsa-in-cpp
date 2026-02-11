#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Size till pattern should print: ";
    cin >> n;

    // 1st Pattern - Square Pattern
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n; j++)
         {
             cout<<"*"<<" ";
         }
         cout<<endl;
     }

    // 2nd Pattern - L Pattern

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    // 2nd Pattern Reverse
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>=0; j--)
        {
            if(j<=i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    //3rd Pattern - Reverse L Pattern
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>=i; j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //3rd Pattern Reverse
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j>=i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}