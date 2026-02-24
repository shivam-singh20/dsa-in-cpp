#include <bits/stdc++.h>
using namespace std;

// T.C - O(n2) S.C - O(n)

int Winner(vector<bool>person, int n, int k, int index, int person_left)
{
    // Base case
    if(person_left == 1)
    {
        for(int i=0; i<n; i++)
            if(person[i] == 0)
                return i;
    }

    // Killing the kth person
    int count = 0;
    while(count<k)
    {
        if(person[index] == 0)
            count++;
        if(count == k)
            break;
        index = (index+1) % n;
    }

    person[index] = 1;

    // Circular rotation
    while(person[index] == 1)
        index = (index + 1) % n;

    return Winner(person,n,k,index,person_left-1);
}

// T.C - O(n) S.C - O(n)

int Winner2(int n, int k)
{
    if(n==1)
        return 0;
    return (Winner2(n-1,k) + k) % n;
}



int main (){
    int n;
    cout<<"Enter number of players: ";
    cin>>n;
    int k;
    cout<<"Enter orders to eliminate players: ";
    cin>>k;

    vector<bool>count_kill(n,0);

    cout<<"Winner is player number: "<<Winner(count_kill,n,k,0,n) + 1;
    cout<<"\nWinner is player number: "<<Winner2(n,k) + 1;

    return 0;
}