#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Size till pattern should print: ";
    cin >> n;

    // cout<<"\nComplex Pattern - 5(Hollow Square)\n"<<endl;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++){
    //         if(i==0 || i==n-1 || j==0 || j==n-1)
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"\nComplex Pattern - 5.1(Hollow Rectangle)\n"<<endl;

    // int m = 10;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++){
    //         if(i==0 || i==n-1 || j==0 || j==m-1)
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"\nComplex Pattern - 6(Hollow Triangle)\n"<<endl;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<=i; j++)
    //     {
    //         if(i==0 || i==n-1 || i==j || j==0)
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"\nComplex Pattern - 7\n"<<endl;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n-i-1; j++)
    //         cout<<" ";
    //     for(int k=0; k<=i; k++)
    //         cout<<"* ";
    //     cout<<endl;
    // }

    // cout<<"\nComplex Pattern - 8\n"<<endl;

    // for(int i=n-1; i>=0; i--)
    // {
    //     for(int j=0; j<n-i-1; j++)
    //         cout<<" ";
    //     for(int k=0; k<=i; k++)
    //         cout<<"* ";
    //     cout<<endl;
    // }

    cout<<"\nComplex Pattern - 9\n"<<endl;

    for(int i=0; i<n; i++)
    {
         if(i==n-1)
            break;
        for(int j=n-1; j>=0; j--)
        {
            if(j<=i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }


    


}