#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int i,c=3;
    int b[10];

    for(i=0;i<5;i++)
    {
        cin >> a[i];
        a[i] = a[i] * c;
    }

    for(i=0;i<5;i++)
    {
        cout << a[i] << endl;
    }


    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }

    cout << "print array in the reverse order" << endl;

    for(i=4;i>=0;i--)
    {
        cout << b[i] << endl;
    }


}
