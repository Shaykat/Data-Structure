#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

string infix;
char postfix[20];
int i,k=0;

/*class stack{

    char array[20];
    int topv,size;
    char x;
public:
    stack()
    {
        topv = -1;
    }
    void push(char d)
    {
        if(topv >= size-1)
            {cout << "stack is full" << endl;}
        else
        {
            topv++;
            array[topv]=d;
        }
    }

    char pop()
    {
        if(topv < 0)
        {
            cout << "stack is empty" << endl;
            return 0;
        }

        else
        {
            x=array[topv];
            array[topv] = NULL;
            topv--;
            return x;
        }
    }

    /*int top()
    {
        return arry[top];
    }

    bool empty()
    {
        if(topv < 0)
            return true;
        else
            return false;
    }

    char top()
    {
        return array[topv];
    }



};*/

int priority(char c)
{
    if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '(' || c == '#')
        return 0;
}


int main()
{

    stack<char> s;

    getline(cin,infix);
    //int length = strlen(infix);

    for(i=0;infix[i] != '\0';i++)
    {
        if(infix[i]>='0' && infix[i]<='9')
        {
            postfix[k++]=infix[i];
        }

        else if(infix[i] == '(')
        {
           s.push(infix[i]);
        }

        else if(infix[i] == ')')
        {
            while(s.top() != '(')
            {
                postfix[k++] = s.top();
                s.pop();
            }
        }

        else if(infix[i]=='+' || infix[i]=='-'|| infix[i]=='*'|| infix[i]=='/')
        {
            char c=infix[i];
            if(s.empty())
            {
                s.push(infix[i]);
            }

            else if(s.top() == '(')
            {
               s.push(infix[i]);
            }

            else if(priority(c) > priority(s.top()))
            {
                s.push(infix[i]);
            }

            else
                {
                    postfix[k++]=s.top();
                    s.pop();

                    /*while(s.top() != infix[i])
                    {
                         if(mystack.empty())
                    {
                        mystack.push(infix[i]);
                    }

                    else if(mystack.top() == '(')
                    {
                        mystack.push(infix[i]);
                    }

                    else    if((infix[i] == '*' || infix[i] == '/') && (mystack.top() == '+' || mystack.top() == '-'))
                    {
                        mystack.push(infix[i]);
                    }

                    else
                    {
                        postfix[k]=mystack.pop();
                        k++;
                    }
                    }*/
                }
        }


    }
    while(!s.empty())
    {
        postfix[k++]=s.top();
        s.pop();
    }

    postfix[k+1]='\0';

    cout << "converted expression(postfix): " << endl;
    for(int i=0; postfix[i]!='#'; i++) //last element in postfix is '#'
        cout<<postfix[i];


    return 0;
}

