#include<iostream>
using namespace std;

// Numbers Pattern
int main()
{
    int n;
    cout << "Size till pattern should print: ";
    cin >> n;

    cout<<"\n1st Pattern - Square Number Pattern\n";
    cout<<endl;

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=n; j++)
        cout<<j<<" ";
        cout<<endl;
    }


    cout<<"\n2nd Pattern - L Number Pattern - 1\n";
    cout<<endl;

// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }


    cout<<"\n3rd Pattern - L Number Pattern - 2\n";
    cout<<endl;

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }


    cout<<"\n4th Pattern - Reverse L Number Pattern\n";
    cout<<endl;

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1 

    for(int i=0; i<n; i++)
    {
        for(int j=i; j>=0; j--)
            cout<<j+1<<" ";
        cout<<endl;
    }



    cout<<"\n5th Pattern - Reverse L Pattern in Numbers\n";
    cout<<endl;

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }


    cout<<"\n6th Pattern - L Pattern in Reverse\n";
    cout<<endl;

// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
            cout<<n-j<<" ";
        cout<<endl;
    }


    cout<<"\n7th Pattern - Mirror Image of L - 1\n";
    cout<<endl;

//     1
//    22
//   333
//  4444
// 55555

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
            cout<<" ";

        for(int k=n-i-1; k<n; k++)
            cout<<i+1;
        cout<<endl;
    }


    cout<<"\n8th Pattern - Mirror Image of L - 2\n";
    cout<<endl;

//     1
//    12
//   123
//  1234
// 12345

    for(int i=0; i<n; i++)
    {
        int num = 1;
        for(int j=0; j<n-i-1; j++)
            cout<<" ";

        for(int k=n-i-1; k<n; k++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }


    cout<<"\n9th Pattern - Mirror Image of L - 3\n";
    cout<<endl;

//     1
//    21
//   321
//  4321
// 54321

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
            cout<<" ";

        for(int k=n-i-1; k<n; k++)
        {
            cout<<n-k;
        }
        cout<<endl;
    }

    cout<<"\n10th Pattern - Pyramid Pattern\n";
    cout<<endl;

//     1
//    121
//   12321
//  1234321
// 123454321

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
            cout<<" ";

        for(int k=0; k<=i; k++)
        {
            cout<<k+1;
        }

        for(int l=i; l>=1; l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
}