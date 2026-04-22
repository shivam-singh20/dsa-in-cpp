#include<iostream>
using namespace std;

// Simple Calculator
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a*b;
}

float divide(float a, float b)
{
    return a/b;
}

int main()
{
    int num1, num2;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;

    cout<<"Addition of number is: "<<add(num1,num2)<<endl;
    cout<<"Subtraction of number is: "<<subtract(num1, num2)<<endl;
    cout<<"Multiplication of number is: "<<multiply(num1, num2)<<endl;
    cout<<"Division of number is: "<<divide(num1, num2)<<endl;
}