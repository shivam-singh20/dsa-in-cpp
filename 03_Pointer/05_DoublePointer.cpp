#include <bits/stdc++.h>
using namespace std;

int main (){
    int a = 10; 

    //Single pointer
    int *p = &a;
    cout<<p<<endl;

    //Double pointer
    int **ptr = &p;
    cout<<ptr<<endl;

    //Thriple pointer
    int ***p1 = &ptr;
    cout<<p1<<endl;

    
    
    return 0;
}