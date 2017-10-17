#include<iostream>
using namespace std;
const int size = 100;
int que[size];
int rear = -1,front = -1,n=0;
void EnQ(int a)
{
   if(rear >= size)
   {
       cout << "Queue is full\n";
   }
   else
   {
       rear ++;
       que[rear] = a;
       if(front == -1)
       {
           front ++;
       }
       n++; // number of element
   }
}

int DeQ()
{
    int a;
    if(n <= 0)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        a = que[front];
        front ++;
        n --;
    }

    return a;
}

int main()
{
    int a,b;

    cout << "Enter Number of value you want to add: ";
    cin >> b;
    for(int i=0;i<b;i++)
    {
        cin >> a;
        EnQ(a);
    }

    cout << "Elements od Queue is given bellow: \n";
    for(int i=0;i<b;i++)
    {
        cout << DeQ() << " ";
    }
    cout << endl;


}
