#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;

    public:
        node()
        {
            data = 4;
            next = NULL;
        }
};

int main()
{
//Static creation of a linked list
node A1;
cout<<A1.data<<" "<<A1.next<<endl;

//Dynamic creation of a linked list 
node *head;
head = new node();
head -> data = 7;
head -> next = NULL;
cout<<head -> data<<" "<<head -> next<<endl;
}