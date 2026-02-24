#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Size till pattern should print: ";
    cin >> n;

    cout<<"\n1st Pattern - Square Pattern\n";
    cout<<endl;
    //* * * * * 
    //* * * * * 
    //* * * * *
    //* * * * * 
    //* * * * * 
    
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n; j++)
         {
             cout<<"*"<<" ";
         }
         cout<<endl;
     }

    cout<<"\n2nd Pattern - L Pattern\n";
    cout<<endl;

    //* 
    //* *
    //* * *
    //* * * *
    //* * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout<<"\n3rd Pattern - Mirror image of above Pattern\n";
    cout<<endl;

    //     *
    //    **
    //   ***
    //  ****
    // *****

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

    cout<<"\n4th Pattern - Reverse L Pattern\n";
    cout<<endl;

    // * * * * * 
    // * * * *
    // * * *
    // * *
    // *

    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>=i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n5th Pattern - Mirror image of above pattern\n";
    cout<<endl;

    // *****
    //  ****
    //   ***
    //    **
    //     *

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