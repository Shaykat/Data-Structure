#include<iostream>
#include<cmath>
using namespace std;

class node{
int data;
node *next;

public:
node *start,*np,*p,*ptr,*delt,*prev;

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
    ptr = start;

    cout << "The created list is given bellow: " << endl;
    while(ptr != NULL)
    {
        cout << ptr->data << " --> ";
        ptr = ptr->next;
    }

    cout << endl;
    cout << "\n\n";
}

void deletion()
{
    int v;
    cout << "Enter which node u want to delete: ";
    cin >> v;
    delt = start;
    if(start->data == v)
    {
        start = delt->next;
        delete(delt);
    }
    else
    {
        while(delt->data != v && delt->next !=NULL)
        {
            prev = delt;
            delt = delt->next;
        }
        if(delt->data == v)
        {
            prev->next = delt->next;
            delete(delt);
        }
    }

}

void delete_before()
{
    int v;
    cout << "Enter a value before which you want to delete: ";
    cin >> v;
    delt = start;

    while(delt->next->data != v && delt->next->next != NULL)
    {
        prev = delt;
        delt = delt->next;
    }

    if(delt->next->data == v)
    {
       prev->next = delt->next;
       delete(delt);
    }
}


};

int main()
{
   node list;
    list.start = NULL;
    int i,n;
    cout << "Enter the number of value you want to add: ";
    cin >> n;
    cout << "Enter values to add: " << endl;
    for(i=0;i<n;i++)
    {
        list.Add();
    }
    list.display();
    list.deletion();
    list.display();
    list.delete_before();
    list.display();

}
