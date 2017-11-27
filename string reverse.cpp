#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string c;
    char ch[20],ch1[20];
    int i;

    cin >> ch;
    cin >> ch1;

    if(strstr(ch,ch1) != NULL)
    {
        cout << strstr(ch,ch1);
    }


    /*int l=strlen(ch);

    c = strrev(ch);
    cout << ch;*/
}
