#include<stdio.h>
#include <iostream>
#include<cstdlib>
#include<stack>
#include<string.h>

using namespace std;
bool isoperator(char ch)
    {
        if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
            return true;
        else
            return false;
    }
int  perform_operation(char op,int op1,int op2)
{
    int ans;
    if(op=='+')
    {
        ans=op1+op2;
    }
    else if(op=='-')

    {
        ans=op1-op2;
    }
     else if(op=='*')

    {
        ans=op1*op2;
    }
     else

    {
        ans=op1/op2;
    }
    return ans;
}
int main()
{
    char exp[1000],buffer[15];
    int i,j,len,op1,op2,x;
    stack<int> s;
    cout<<"Enter a Postfix Expression: ( e.g. 23 34 * )"<<endl;
    gets(exp);
    len=strlen(exp);
        j = 0;
    for(i=0; i<len;i++){

        if(exp[i]>='0' && exp[i]<='9')
            {
            buffer[j++] = exp[i];
        }
        else if(exp[i]==' '){
            if(j>0){
                buffer[j] = '\0';
                x = atoi(buffer);
                s.push(x);
                j = 0;
            }
        }
        else if(isoperator(exp[i]))
        {
            op2=s.top();
            s.pop();
            op1=s.top();
            s.pop();
            s.push(perform_operation(exp[i],op1,op2));
        }
    }


    cout << "ans is= "<<s.top() << endl;
    return 0;
}
