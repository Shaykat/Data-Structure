#include<iostream>
using namespace std;

class node
{
    int data;
    node *next;

    public:
    node *head,*tail,*np,*p,*ptr;

    node()
    {
        head = NULL;
        tail = NULL;
    }

    void Enque(int x)
    {
        np = new node;
        np->data = x;
        if(head == NULL)
        { head = np; }
        else
        { p->next = np; }
        np->next = NULL;
        tail = np;

        p = np;
    }

    void Deque()
    {
        if(head == NULL)
        {
            cout << "Queue is empty" << endl;
        }

        else
        {
            ptr = head;
            head = ptr->next;
            delete(ptr);
        }
    }

    void print()
    {
        ptr = head;
        if(head == NULL)
        {
            cout << "No content to show" << endl;
        }
        else
        {
            cout << "contents of queue " << endl;
            while(ptr != NULL)
            {
                cout << ptr->data << endl;
                ptr = ptr->next;
            }
        }
    }

};

int main()
{
    node list;

    list.Enque(5);
    list.Enque(8);
    list.Enque(7);
    list.print();
    list.Deque();
    list.print();
    list.Enque(12);
    list.print();
    list.Deque();
    list.print();

    return 0;
}
