#include<iostream>
#include<cstdlib>
using namespace std;

#define size 4;

class stack{

    int arry[10];
    int top;
    int x;
public:
    stack(){
        top = -1;
    }
    void push(int d){
        if(top >= 3){
            cout << "stack is full" << endl;
        }
        else{
            top++;
            arry[top]=d;
        }
    }

    int pop(){
        if(top < 0){
            cout << "stack is empty" << endl;
            return 0;
        }

        else{
            x=arry[top];
            top--;
            return x;
        }
    }

    int top(){
        return arry[top];
    }
};

int main(){
    stack s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    return 0;
}
