#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
    
    public:
        Node(int value)
        {
            data = value;
            next = NULL;
        }
};

int main()
{
    // Inserting values of array in linked list

    vector<int>arr = {4,6,3,2,1};

    Node *Head;
    Head = NULL;

    for(int i=0; i<arr.size(); i++)
    {
        if(Head == NULL){ //Inserting element in start if Head is pointing to null index of Node
            Head = new Node(arr[i]);
        }

        else //Inserting element in start if Head is pointing to an index of Node and linked list is already formed
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp -> next = Head;
            Head = temp;
        }

    }
    Node *temp = Head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }

}