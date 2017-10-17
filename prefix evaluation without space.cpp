#include <windows.h>
#include <iostream>
#include <fstream>
#include <stack>
#include<cstring>
//#include <main.h>

using namespace std;

void WriteExpression(char expression[]);
void ReverseArray (char arr []);
bool isNumber(char &exp);

int main()
{
    stack<int> s;
    char expression [100];// = "/2*+435";
    cin >> expression;

    WriteExpression(expression);//display our rpn expression on the screen

    cout<<endl;//newline space

    int n;//a number ot push onto the stack
    int result;//a result after performing
    ReverseArray(expression);

    for(int i = 0; i < 7; i++)
    {

        if(isNumber(expression[i])==true)
        {
            char c = expression[i];
            n = c-'0';//parse the char to an integer
            s.push(n);
        }
        if(expression[i]=='+')
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            result = x+y;
            s.push(result);
        }
        if(expression[i]=='-')
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            result = y-x;
            s.push(result);
        }
        if(expression[i]=='*')
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            result = x*y;
            s.push(result);
        }
        if(expression[i]=='/')
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            result = y/x;
            s.push(result);
        }
    }
    cout<<"result of expression: "<<s.top();//result should be 17...

    return 0;
}
void WriteExpression(char arr [])
{
    for(int i = 0; i < 7; i++)
    {
        cout<<arr[i];
    }
}
void ReverseArray(char arr [])
{
    int end = strlen(arr) - 1;
    int start = 0;
    char temp;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
bool isNumber(char &n)//pass in a char reference
{

    if(!isdigit(n))//check if the char is a number...
    {
        return false;
    }
    else
        return true;
}
