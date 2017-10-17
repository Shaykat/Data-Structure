#include<iostream>
using namespace std;

class node{
int data;
node *next;

public:
node *start,*np,*p,*ptr,*prev;

void creat_list_sortedly()
{
    int v;
    cout << "Enter a value to add: " << endl;
    cin >> v;
    ptr = start;
    np = new node;
    np->data = v;

    if(start == NULL)
    {

        start = np;
        np->next = NULL;
    }

    else
    {

    if(v < start->data)
    {
        np->next=start;
        start=np;
    }

    else
    {
    while(v > ptr->data && ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    if(ptr->next == NULL && v > ptr->data)
    {
        ptr->next = np;
        np->next = NULL;
    }

    else if(v < ptr->data)
    {

        np->next = ptr;
        prev->next = np;

    }
    }

    }


}

void display()
{
    ptr = start;

    cout << "The created list is given bellow: " << endl;
    while(ptr!= NULL)
    {
        cout << ptr->data << " --> ";
        ptr = ptr->next;
    }

    cout << endl;
    cout << "\n\n";
}
};

int main()
{
    node list;
    list.start = NULL;
    int n;
    cout << "Enter number of value you want to add: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        list.creat_list_sortedly();
    }
    list.display();

    return 0;

}

