#include<iostream>
#include<cmath>
using namespace std;

class node{
int data;
node *next;

public:
    node *start,*np,*ptr,*p;

    void creatlist()
    {
        int v;
        cin >> v;
        np = new node;
        np->data = v;
        np->next = NULL;

        if(start == NULL)
        {
            start = np;
        }

        else
        {
            p->next = np;
        }
        p = np;
    }

    void display()
    {
        cout << "The created list is given bellow: " << endl;
        ptr = start;

        while(ptr != NULL)
        {
            cout << ptr->data << " --> ";
            ptr = ptr->next;
        }

        cout << endl;
    }

    void add_data_sortedly()
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

};

int main()
{
    node list;
    list.start = NULL;
    int n;
    cout << "Enter the number of value you want to add in list: ";
    cin >> n;
    cout << "Enter values to create list: " << endl;
    for(int i=0;i<n;i++)
    {
        list.creatlist();
    }
    list.display();
    list.add_data_sortedly();
    list.display();
}

