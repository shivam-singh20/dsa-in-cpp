#include <iostream>
#include <stack>
using namespace std;

// Stack is a linear data structure in which insertion and deletion is only allowed at top of the stack. It follows LIFO principle.

class Stack {
    int *arr;
    int top;
    int size;

    public:



    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // Push operation in a stack
    void push(int value)
    {
        if(top == size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" into the stack.\n";
        }
    }

    // Pop operation in a stack
    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow";
            return;
        }
        else
        {
            cout<<"Poped "<<arr[top]<<" from the stack.\n";
            top--;
        }
    }

    // Peek element in the stack
    int peek()
    {
        if(top == -1)
        {
            cout<<"Stack is Empty";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    // IsEmpty in stack
    bool IsEmpty()
    {
        if(top == -1)
            return 0;
        else
            return 1;
    }

    // Current Size of the stack
    void stackSize()
    {
        if(top == -1)
            cout<<"Stack is empty";
        else
        {
            cout<<"Size of the stack is "<<top+1<<endl;
        }
    }

};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(100);

    cout<<st.peek()<<endl;

    st.pop();

    
}