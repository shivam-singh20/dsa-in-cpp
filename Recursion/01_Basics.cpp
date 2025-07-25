#include <bits/stdc++.h>
using namespace std;

void Print(int n)
{
    if(n == 1)  //Base condition
    {
        cout<<n<<" days left for birthday."<<endl;
        return;
    }
    cout<<n<<" days left for birthday."<<endl;
    Print(n-1);
}

int main (){
    // Iterative approach
    // int n;
    // cin>>n;

    // for(int i=n; i>0; i--)
    //     cout<<i<<" days left for birthday."<<endl;

    // cout<<"Happy Birthday!";

    // Recursive approach
    int num;
    cin>>num;
    Print(num);
    cout<<"Happy Birthday!";

    return 0;
}