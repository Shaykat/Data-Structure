#include <iostream>
#include <stack> //to use stack class
#include <string> //to use string class

using namespace std;

int priority(char x)//this func will return integer priority
{
    switch(x)
    {
        case '(': //if top of stack is '('OR
        case '#': //if stack empty
            return 0;//lowest priority
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;//highest priority
    }
}

//............Main function start
int main()
{
    string infix;
    char postfix[50],c;
    int i,k=0;

    stack<char>st;
    st.push('#'); //when stack is empty, the top element is '#'


    cout<< "Enter your infix expression as string: "<<endl;
    cin>>infix;


    for(i=0; infix[i]!='\0'; i++)
    {
        c = infix[i];

        if(c == '(') // push to stack

           {
               st.push(c);

           }
        else if (c==')') //pop() and add it to postfix until top becomes '('
            {
                while(st.top()!='(')
                    {
                        postfix[k++]=st.top();
                        st.pop();
                    }
                st.pop();//discard '(' from stack

            }
        else if (c=='+' || c=='-' || c=='*' || c=='/')
            {

                while (priority(c)<=priority(st.top()))
                    {
                        if(st.top()!='#')
                            postfix[k++]=st.top();
                        st.pop();
                    }

                    st.push(c);

            }
        else
            postfix[k++]=c;
    }
    while(!st.empty())
        {
            postfix[k++]=st.top();
            st.pop();
        }

    cout<<"Converted Postfix expression:  "<<endl;
    for(int i=0; postfix[i]!='#'; i++) //last element in postfix is '#'
        cout<<postfix[i];

    cout<<endl;
}
//-------------OUT PUT-------------

/*
Enter your infix expression as string:
2*3/(2-1)+5*3
Converted Postfix expression:
23*21-/53*+
*/
