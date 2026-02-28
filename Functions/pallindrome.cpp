#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int original = n;
    
    int ans = 0;
    while(n)
    {
        int temp = n%10;
        n = n/10;
        ans = ans*10 + temp;
    }

    if(original == ans)
        cout<<1;
    else
        cout<<0;

}