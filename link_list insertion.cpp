#include<iostream>
using namespace std;

class node{
private:
int data;
node *next;

public:
node *start,*np,*p,*head;

void Add()
{
    int v;
    cin >> v;
    np = new node;
    np->data = v;
    np->next=NULL;

    if(start == NULL)
    {
        start = np;
    }
    else
    p->next=np;

    p=np;
}

void display()
{
    head = start;

    cout << "The created list is given bellow: " << endl;
    while(head != NULL)
    {
        cout << head->data << " --> ";
        head = head->next;
    }

    cout << endl;
}

void insert_before()
{
    head = start;
    node *curr,*prev;
    int nv,v;
    cout << "Enter a new value to add ";
    cin >> nv;
    cout << "Enter a value before which you want to add: ";
    cin >> v;
    np = new node;
    np->data = nv;

   if(start->data == v)
    {
        np->next=start;
        start=np;
    }

    else
    {
        while(head->data != v)
        {
            prev = head;
            head = head->next;
        }

        np->next = head;
        prev->next = np;

    }

    head = start;
}

};

int main()
{
    node list;
    list.start = NULL;
    int i,n;
    cout << "Enter the number of value you want to add: ";
    cin >> n;
    cout << "Enter a value to add: ";
    for(i=0;i<n;i++)
    {
        list.Add();
    }
    list.display();
    list.insert_before();
    list.display();
}
