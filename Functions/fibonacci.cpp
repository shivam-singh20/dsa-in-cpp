#include <bits/stdc++.h>
using namespace std;

int main (){
    // Printing fibonacci series
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int mod = 1e9 + 7;

    vector<int>fib(n+1);
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<=n; i++)
        fib[i] = (fib[i-1] + fib[i-2]) % mod ;

    cout<<"Fibonacci series till "<<n<<" is: ";
    for(int i=0; i<=n; i++)
        cout<<fib[i]<<" "; 
 
    return 0;
}