#include<iostream>
using namespace std;

class ins_del{

    int a[50];
    int i,k,n,last,value;

public:
void insert_value(int a[],int last,int k,int value)
{
    int i;
    if(k>last)
    {
        a[k]=value;
    }
     else
    {

    for(i=last;i>=k;i--)
    {
        a[i+1] = a[i];
    }
    a[k] = value;
    last++;

    }

    for(i=0;i<=last;i++)
    {
        cout << a[i];
    }
}

};

int main()
{
    int a[50];
    int i,k,n,last,value;
    ins_del ob;

    cout << "please enter N: ";
    cin >> n;
    last=n-1;
    cout << "Enter int value for the following array......." << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "Now input VALUE which you want to add in the K th position...." << endl;
    cout << "K: ";
    cin >> k;
    cout << "VALUE: ";
    cin >> value;
    ob.insert_value(a,last,k,value);




}
