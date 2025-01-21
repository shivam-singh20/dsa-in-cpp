#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string addString(string num1, string num2)
{
    int index1 = num1.size()-1, index2 = num2.size()-1;
    int carry = 0, sum;
    string ans;
    while(index2>=0)
    {
        sum = num1[index1] - '0' + num2[index2] - '0' + carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans+=c;
        index2--;
        index1--;
    }

    //Index1 exists
    while(index1>=0)
    {
        sum = num1[index1] - '0' + carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans+=c;
        index1--;
    }
    //If carry exists
    if(carry)
    ans+='1';
    reverse(ans.begin(),ans.end());
    return ans;
}

int main (){
    string num1,num2;
    cout<<"Enter number1: ";
    getline(cin,num1);
    cout<<"Enter number2: ";
    getline(cin,num2);

    if(num2.size()>num1.size())
        cout<<"Added string is: "<<addString(num2,num1);
    else
        cout<<"Added string is: "<<addString(num1,num2);

    return 0;
}