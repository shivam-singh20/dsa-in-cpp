#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Size till pattern should print: ";
    cin >> n;

    cout<<"Complex Pattern - 1"<<endl;

    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *

    for(int i=0; i<(2*n)-1; i++)
    {
        if(i<n)
        {
            for(int j=0; j<=i; j++)
                cout<<"*";
        }
        else
        {
            for(int k=i-n; k<n-1; k++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"\nComplex Pattern - 2"<<endl;

    //      *
    //     ***
    //    *****
    //   *******
    //  *********
    // ***********

    for(int i=0; i<n; i++)
    {
        // Printing Spaces
        for(int j=0; j<=n-i-1; j++)
        {
            cout<<" ";
        }

        //Printing Stars
        for(int k=0; k<=2*i; k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    cout<<"\nComplex Pattern - 3"<<endl;

    //***********
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    for(int i=0; i<n; i++)
    {
        // Printing Spaces
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }

        // Printing Stars
        for(int k=0; k<(n*2-1)-(i*2); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\nComplex Pattern - 4"<<endl;

    //      *
    //     ***
    //    *****
    //   *******
    //  *********
    // ***********
    //  *********
    //   *******
    //    *****
    //     ***
    //      *

    for(int i=0; i<(n*2)-1; i++)
    {
        if(i<n)
        {
            for(int j=0; j<n-i-1; j++)
            {
                cout<<" ";
            }

            for(int k=0; k<=2*i; k++)
                cout<<"*";
        }

        else{
            for(int j=0; j<i-n+1; j++)
            {
                cout<<" ";
            }

            for(int k=0; k<2*(2*n - i - 1) - 1; k++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }


}