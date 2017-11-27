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

void search()
{
    int iteam;
    cout << "Enter a  value to search in the list ";
    cin >> iteam;
    ptr = start;
    while(ptr->data != iteam && ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    if(ptr->data == iteam)
    {
        cout << iteam << " Found" << endl;
    }

    else
    {
        cout << iteam << " Not Found" << endl;
    }

    cout << "\n\n";
}

void insert_after()
{
    int nv,v;
    cout << "Enter a new value to add ";
    cin >> nv;
    cout << "Enter a value after which you want to add: ";
    cin >> v;
    while(ptr->data != v)
    {
        ptr = ptr->next;
    }
    np = new node;
    np->data = nv;

    if(ptr->next == NULL)
    {
        ptr->next = np;
        np->next = NULL;
    }

    else
    {
        np->next = ptr->next;
        ptr->next = np;
    }

}

void insert_before()
{
    ptr = start;
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
        while(ptr->data != v)
        {
            prev = ptr;
            ptr = ptr->next;
        }

        np->next = ptr;
        prev->next = np;

    }
}

void add_soted_data()
{
    ptr = start;
        while(ptr->next != NULL)
        {
            if(abs(ptr->data - ptr->next->data) > 1 )
            {
                np = new node;
                np->data = ptr->data + 1;
                np->next = ptr->next;
                ptr->next = np;
            }
            ptr = ptr->next;
        }
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
    if(delt->data == v)
    {
        cout << "No other node is exist before this node, so nothing to delete here \n\n";
    }
    if(delt == start)
    {
        start = delt->next;
        delete(delt);
    }

    else if(delt->next->data == v)
    {
       prev->next = delt->next;
       delete(delt);
    }
}

void delete_after()
{
    int v;
    cout << "Enter a value after which value you want to delete: ";
    cin >> v;

    delt = start;
    while(delt->data !=v && delt->next != NULL)
    {
        prev = delt;
        delt = delt->next;
    }
    if(delt->next == NULL)
    {
        cout << "This is the last node,so there is no node to delete" << endl << endl;
    }
    else if(delt->data == v)
    {
        delt = delt->next;
        prev = prev->next;

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
    list.search();
    list.insert_after();
    list.display();
    list.insert_before();
    list.display();
    list.add_soted_data();
    list.display();
    list.deletion();
    list.display();
    list.delete_before();
    list.display();
    list.delete_after();
    list.display();
}
