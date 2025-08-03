#include <bits/stdc++.h>
using namespace std;

void TOH(int n, int source, int helper, int destination)
{
    if(n == 1)
    {
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
        return;
    }

    TOH(n-1,source,destination,helper);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    TOH(n-1,helper,source,destination);
}

int main (){
    int n;
    cout<<"Enter number of disk: ";
    cin>>n;

    int rod1 = 1, rod2 = 2, rod3 = 3;

    cout<<"Steps to move "<<n<<" disk are as follow:\n";
    TOH(n,rod1,rod2,rod3);
    cout<<endl;
    cout<<"Total number of steps required to move "<<n<<" disk are "<<pow(2,n)-1<<".";

    return 0;
}