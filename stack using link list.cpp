#include<iostream>
using namespace std;

class node
{
    int data;
    node *next;

public:
    node *top,*np,*ptr;

    node()
    {
        top = NULL;
    }

    void push(int x)
    {
        if(top == NULL)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            np = new node;
            np->data = x;
            np->next = top;
            top = np;
        }

    }

    void pop()
    {
        if(top == NULl)
        {
            cout << "Under flow" << endl;
        }
        else
        {
            ptr = top;
            top = ptr->next;
            delete(ptr);
        }

    }
    int Top()
    {
        return top->data;
    }

    void print()
    {
        ptr = top;
        cout << "contents of the stack:- \n";
        while(ptr != NULL)
        {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
};

int main()
{
    node list;
    list.push(5);
    list.push(7);
    list.push(9);
    list.print();
    cout << "Top of the stack is: " << list.Top() << endl;
    list.pop();
    list.print();
    cout << "Top of the stack is: " << list.Top() << endl;

    return 0;
}
