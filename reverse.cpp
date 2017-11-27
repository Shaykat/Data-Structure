#include<iostream>
#include<string>
#include<cstring>
#include<stack>
using namespace std;

bool operator_operand(char c)
{
    if(c >= '0' && c <= '9')
        return true;
    else if(c == '+' || c == '-' || c == '*' || c == '/' || c == ')')
        return false;
}

int priorety(char c)
{
    if(c == '+' || c == '-' )
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == ')')
        return 0;
}

int main()
{
    char tinfix[100];
    cin.getline(tinfix,50);
    int l=strlen(tinfix);
    int i;

    string tprefix,infix,prefix;
    stack <char> s;

    for(i=0;i<l;i++)
    {
        if(operator_operand(tinfix[i]))
        {
            tprefix = tprefix + tinfix[i];
        }

        else if(tinfix[i] == ')')
        {
            s.push(tinfix[i]);
        }

        else if(infix[i] == '(')
        {
            while(s.top()!=')')
            {
                tprefix = tprefix + s.top();
                s.pop();
            }
             s.pop();
        }

        else if(!operator_operand(tinfix[i]))
        {

        while(priorety(tinfix[i]) < priorety(s.top()))
        {
            if(!s.empty())
            {
                tprefix = tprefix + s.top();
                s.pop();
            }
        }

        s.push(tinfix[i]);
       }

    }

    while(!s.empty())
    {
        tprefix = tprefix + s.top();
        s.pop();
    }

    cout << tprefix;
    //prefix = reverse(tprefix,l);
}
