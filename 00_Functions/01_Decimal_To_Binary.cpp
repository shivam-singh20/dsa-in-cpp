#include<iostream>
using namespace std;

// Decimal to Binary
int Binary(int n)
{
    int ans = 0, mul = 1;
    while(n>0)
    {
        int temp = n % 2;
        ans = temp * mul + ans;
        mul = mul * 10;
        n /= 2;
    }
    return ans;
}

// Binary to Decimal
int Decimal(int m)
{
    int ans = 0; int rem = 0; int mul = 1;
    while(m>0)
    {
        rem = m % 10;
        ans = rem * mul + ans;
        mul = mul * 2;
        m /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter number in decimal form: ";
    cin>>n;

    int m;
    cout<<"Enter number in binary form: ";
    cin>>m;

    cout<<n<<" is converted to "<<Binary(n)<<" binary form."<<endl;
    cout<<m<<" is converted to "<<Decimal(m)<<" decimal form."<<endl;
}