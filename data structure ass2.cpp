#include<iostream>
#include<string>
#include<stack>
#include<cstring>
using namespace std;

int main()
{
    char exp[20]; // declair string

    cout << "Enter the expression: " << endl;
    cin >> exp; // input string
    int len;
    len = strlen(exp);

    stack <char> expt; // declair a stack

    for(int i=0;i<len;i++) // loop till length of string
    {
        if(exp[i] != ')') // until get ')' push all charecters to stack
        {
            expt.push(exp[i]);
        }
        else if(exp[i] == ')') // if get ')' then start to pop from stack
        {
            while(expt.top() != '(') // while doesn't get '('
                  {
                      expt.pop(); // pop untill get '('
                  }
                  expt.pop(); // pop '(' from stack
        }
    }
    if(expt.empty()) // if stack is empty then valid
    {
        cout << "valid" << endl;
    }
    else             // else not valid
    {
        cout << "not valid" << endl;
    }
}
