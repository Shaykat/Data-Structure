#include<iostream>
using namespace std;

class node{
int data;
node *prev;
node *next;

public:

node *start,*tail,*np,*ptr,*p;

void creat_doubly_list()
{
    start = tail = NULL;
    int v;
    cout << "Enter value to add: ";
    cin >> v;
    np = new node;
    np->data = v;

    if(start == NULL)
    {
        start = np;
        tail = start;
        np->next = NULL;
        np->prev = NULL;
    }

    else
    {
        np->next = NULL;
        np->prev = tail;
        tail = np;
        p->next = np;
    }

    p = np;
}

void display()
{
    ptr = start;
    while(ptr != NULL)
    {
        cout << ptr->data << "-->";
        ptr = ptr->next;
    }
}


};

int main()
{
    node list;
    list.start = list.tail = NULL;
    int n;
    cout << "Enter number of value you want add: ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        list.creat_doubly_list();
    }
    list.display();
}
