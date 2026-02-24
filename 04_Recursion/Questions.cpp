#include <bits/stdc++.h>
using namespace std;

void Print(int num)
{
    if(num == 0)
        return;
    cout<<"Coder Army"<<endl;
    Print(num-1);
}

void Odd(int num)
{
    if(num == 1)
    {
        cout<<num;
        return;
    }
    if(num%2 != 0)
        cout<<num<<" ";
    
    Odd(num - 1);
}

void Print1(int n, int num)
{
    if(n == num)
    {
        cout<<n;
        return;
    }
    cout<<n<<" ";
    Print1(n+1,num);
}

void Odd1(int n, int num)
{
    if(n-1 == num)
        return;
    else if(n==num)
    {
        cout<<n;
        return;
    }
    cout<<n<<" ";
    Odd1(n+2,num);
}

void Print2(int n,int num)
{
    if(n == num)
    {
        cout<<n;
        return;
    }
    cout<<n<<" ";
    Print2(n+1, num);
}


void Table(int num,int n)
{
    if(num == 10)
        return;

    num++;
    int tab = n * num;
    cout<<tab<<" ";
    Table(num, n);
}

void Print3(int num)
{
    if(num == 1)
    {
        cout<<1<<" ";
        return;
    }
    Print3(num - 1);
    cout<<num<<" ";
}

int main (){
    // cout<<"Printing \"Coder Army\" 10 times using recursion"<<endl;

    // int n1 = 10;
    // Print(n1);
    // cout<<endl;

    // cout<<"Printing all odd number from n to 1 using recursion"<<endl;

    // int n2;
    // cin>>n2;
    // Odd(n2);
    // cout<<endl;

    // cout<<"Printing all numbers from 1 to n using recursion."<<endl;

    // int n3 = 1, num1;
    // cin>>num1;
    // Print1(n3, num1);
    // cout<<endl;

    // cout<<"Printing all odd numbers from 1 to n using recursion."<<endl;
    // int n4 = 1, num2;
    // cin>>num2;
    // Odd1(n4,num2);
    // cout<<endl;

    // cout<<"Printing all numbers from 10 to n using recursion, where n will be greater than 10."<<endl;
    // int n5 = 10, num3;
    // cin>>num3;
    // Print2(n5,num3);
    // cout<<endl;


    // cout<<"Write a Table program using recursion. Take input number n, and print its table."<<endl;
    // int n6,num4 = 1;
    // cin>>n6;
    // cout<<n6<<" ";
    // Table(num4,n6);

    cout<<"Printing number from 1 to n with only one parameter passed."<<endl;
    int num5;
    cin>>num5;
    Print3(num5);
    return 0;
}