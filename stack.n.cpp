#include<iostream>
using namespace std;

class Stack{
int *arr;
int s;
int top;
public:
    Stack(int a){top = 0;
    arr= new int[a];
    s = a;
    }

    void push(int d);
    int pop();
    void print();

};

void Stack :: push(int d){

    if(top == s)
        cout<<"stack is full"<<endl;

    else    {
        arr[top] = d;
        top++;

    }

}
int Stack :: pop(){

    if(top == 0)
        cout<< "stack is empty"<<endl;

    else
        top--;
        return arr[top];

}
void Stack :: print(){

    for (int i=0; i<top; i++)
    {
            cout<<arr[i]<<endl;

    }

}


int main(){

    int i,a;
    cin >> a;

    Stack ob(a);
    ob.push(5);
    ob.push(2);
    ob.push(7);
    ob.push(9);
    ob.push(9);

    ob.print();

    for(i=0;i<a;i++)
    {
      cout<<ob.pop()<<endl;
    }




}

