#include<stdio.h>
#include <iostream>
#include<cstdlib>
#include<stack>
#include<string.h>

using namespace std;
bool perator(char ch)
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
        ans=op2-op1;
    }
     else if(op=='*')

    {
        ans=op1*op2;
    }
     else

    {
        ans=op2/op1;
    }
    return ans;
}
int main()
{
    char expt[1000],temp[15];
    string pq = "";
    string exp;
    int i,j,len,op1,op2,x;
    stack<int> s;
    cout<<"Enter a Prefix Expression: ( like + 23 2  )"<<endl;
    gets(expt);
    exp = strrev(expt);

        j = 0;
    for(i=0; i<exp.length();i++){

        if(exp[i]>='0' && exp[i]<='9')
        {
            temp[j++] = exp[i];
            pq += exp[i];
            cout << "temp " << temp[j-1] << endl;
        }
        else if(exp[i]==' '){
            if(j>0){
                char q[15];
                temp[j] = '\0';
                int k = 0;
                for(int l = j-1; l >= 0; l--){
                    q[k++] = temp[l];
                }
                x = atoi(q);
                s.push(x);
                j = 0;
            }
        }
        else if(perator(exp[i]))
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


