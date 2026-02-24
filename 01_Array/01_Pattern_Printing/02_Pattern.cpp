#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Size till pattern should print: ";
    cin >> n;

    cout<<"\nComplex Pattern - 1\n"<<endl;

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

    cout<<"\nComplex Pattern - 2\n"<<endl;

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

    cout<<"\nComplex Pattern - 3\n"<<endl;

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

    cout<<"\nComplex Pattern - 4\n"<<endl;

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

    cout<<"\nComplex Pattern - 5(Hollow Square)\n"<<endl;

    // *****
    // *   *
    // *   *
    // *   *
    // *****

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    cout<<"\nComplex Pattern - 5.1(Hollow Rectangle)\n"<<endl;

    // **********
    // *        *
    // *        *
    // *        *
    // **********

    int m = 10;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            if(i==0 || i==n-1 || j==0 || j==m-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    cout<<"\nComplex Pattern - 6(Hollow Triangle)\n"<<endl;

    // *
    // **
    // * *
    // *  *
    // *****

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(i==0 || i==n-1 || i==j || j==0)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    cout<<"\nComplex Pattern - 7(Triangle)\n"<<endl;

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
            cout<<" ";
        for(int k=0; k<=i; k++)
            cout<<"* ";
        cout<<endl;
    }

    cout<<"\nComplex Pattern - 8(Reversed Triangle)\n"<<endl;

    // * * * * *
    //  * * * *
    //   * * * 
    //    * *
    //     *

    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<n-i-1; j++)
            cout<<" ";
        for(int k=0; k<=i; k++)
            cout<<"* ";
        cout<<endl;
    }

    cout<<"\nComplex Pattern - 9(Butterfly)\n"<<endl;

    // *                  *
    // **                **
    // ***              ***
    // ****            ****
    // *****          *****
    // ******        ******
    // *******      *******
    // ********    ********
    // *********  *********
    // ********************
    // *********  *********
    // ********    ********
    // *******      *******
    // ******        ******
    // *****          *****
    // ****            ****
    // ***              ***
    // **                ** 
    // *                  *
    for(int i=1; i<=n; i++)
    {
        //Printing Stars
        for(int j=1; j<=i; j++)
            cout<<"*";

        //Printing Spaces
        for(int k=1; k<=(2*n)-(i*2); k++)
            cout<<" ";

        //Printing Stars
        for(int j=i; j>=1; j--)
            cout<<"*";

    cout<<endl;
    }


    for(int i=n-1; i>=1; i--)
    {
        //Printing Stars
        for(int j=1; j<=i; j++)
            cout<<"*";

        //Printing Spaces
        for(int k=1; k<=(2*n)-(i*2); k++)
            cout<<" ";

        //Printing Stars
        for(int j=i; j>=1; j--)
            cout<<"*";

    cout<<endl;
    }
}