#include <bits/stdc++.h>
using namespace std;

void increment(int *n)
{
    *n = *n + 1;
}

int main (){
    int num = 10;
    int *ptr = &num;
    increment(&num);
    cout<<num;
    return 0;
}