#include <bits/stdc++.h>
using namespace std;

void increment(int *n)
{
    *n = *n + 1;
}

void first(char *ptr1,char *ptr2)
{
    while((*ptr1 = *ptr2))
    {
        ptr1++, ptr2++;
    }
}

int main (){
    // int num = 10;
    // int *ptr = &num;
    // increment(&num);
    // cout<<num;
    // return 0;

    char name[] = "Shivam";
    char sname[] = "Singh";
    first(name,sname);
    cout<<name;
}