#include<iostream>
#include<cstdlib>
using namespace std;
const int size = 12;
int arry[size];
class stack{

    int top1,top2;
    int x;
public:
    stack()
    {
        top1 = -1;
        top2 = size;
    }
    void pushA(int d)
    {
        if(top1 == top2)
            {cout << "stack is full" << endl;}
        else
        {
            top1++;
            arry[top1]=d;
            cout << d << " is pushed to A" << endl;
        }
    }

    int popA()
    {
        if(top1 < 0)
        {
            cout << "stack is empty" << endl;
            return 0;
        }

        else
        {
            x=arry[top1];
            cout << x << " is poped from A" << endl;
            top1--;
            return x;
        }
    }

    int topA()
    {
        return arry[top1];
    }

    void pushB(int d)
    {
        if(top1 == top2)
            {cout << "stack is full" << endl;}
        else
        {
            arry[--top2]=d;
            cout << d << " is pushed to B" << endl;

        }
    }

    int popB()
    {
        if(top2 >= size)
        {
            cout << "stack is empty" << endl;
            return 0;
        }

        else
        {
            x=arry[top2];
            cout << x << " is poped from B" << endl;
            top2++;
            return x;
        }
    }

    int topB()
    {
        return arry[top2];
    }

};

int main()
{


    stack s1;


        s1.pushA(1);
        s1.pushA(2);
        s1.pushB(3);
        s1.pushB(4);


       cout << s1.popA() << endl;
       cout << s1.popA() << endl;
       cout << s1.popB() << endl;
       cout << s1.popB() << endl;
       cout << s1.popB() << endl;


    return 0;
}

