#include<iostream>
using namespace std;

class node{

public:
    int data;
    node *next;

};

node *start,*np,*p;

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

void searchlist(int iteam)
{
    node *head;
    head = start;

    while(head->next != NULL && head->data != iteam)
    {
        head = head->next;
    }

    if(head->data == iteam)
    {
        cout << iteam << " Found" << endl;
    }

    else
        cout << iteam << " Not Found" << endl;
}

void displaylist()
{
    node *head;
    head = start;

    do
    {
        cout << head->data << " --> ";
        head = head->next;
    }while(head->next != NULL);
    cout << head->data << " --> " << endl;
}

int main()
{
    start = NULL;
    creatlist();
    creatlist();
    creatlist();
    displaylist();

    int iteam;
    cin >> iteam;
    searchlist(iteam);

    return 0;

}
