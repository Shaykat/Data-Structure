#include <iostream>
#include <cstdlib>

using namespace std;
#define size 7

int main()
{

int *p=new int [size];
int i;

for( i=0;i<size;i++)
{
    p[i]=rand()%101;
}
for( i=0;i<size;i++)
{
    cout <<p[i] << endl;
}
int val;
    cout<<"insert which value do you want to delete"<<endl;
    cin>>val;
    cout <<endl;

int *q=new int [size -1];

int j=0;//initializing must

for(i=0;i<size;i++)
{
    if(p[i]==val)
    continue;
    else
    {
        q[j]=p[i];
        j++;

    }

}

for(i=0;i<size-1;i++)
{
    cout << q[i] << endl;
}

delete []p;

return 0;}
