#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void binary_convert(int n)
{
    //char binary[100];
    int binary[100];
    int reminder,i=0;
    if(n<=1 && n>=0)
    {
        //binary[i] = (char)n;
        i++;
        //binary[i] == '\0';
        cout << n ;
        //return binary;
    }

    else
    {
        reminder = n%2;
        //
        binary[i] = reminder;
        //i++;
        cout << reminder;
        binary_convert(n/2);
    }
}

int main()
{
    char m;
    cin >> m;
    int n = m;
    binary_convert(n);
    //cout << n/2;

    return 0;
}

