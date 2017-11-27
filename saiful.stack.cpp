#include<iostream>
#include"stack.h"

using namespace std;

void staack :: push(int a)
{
    if(sizee==0)
    {
      t=a;
      sizee=1;

     // for(int i=0;i<sizee;i++)
      //  cout << A[0] << endl;
    }
    else if(sizee==1)
    {
        /*int *temp = new int [sizee];
        temp[sizee-1]=t;

        A=new int[sizee+1];

        for(int i=0;i<sizee-1;i++)
            A[i]=temp[i];

        delete [] temp;
        A[sizee-1]=a; */
        sizee=3;
        A=new int[sizee];
        A[0]=t;
        A[1]=a;
        //for(int i=0;i<sizee;i++)
         // cout << A[i] << endl;
    }
    else
    {
        int *temp = new int [sizee-1];

        for(int i=0;i<sizee;i++)
            temp[i]=A[i];
        delete [] A;
        //sizee=sizee+1;
          A=new int[sizee];

        for(int i=0;i<sizee-1;i++)
            A[i]=temp[i];
        delete [] temp;
        A[sizee-1]=a;
        sizee=sizee+1;
        t=sizee;
         /* for(int i=0;i<sizee;i++)
        cout << A[i] << endl; */
    }

    /*for(int i=0;i<sizee;i++)
        cout << A[i] << endl; */
}


void staack :: print()
{
    for(int i=0;i<sizee-1;i++)
        cout << A[i] << endl;
}

int staack :: pop()
{
    if(sizee==t)
    {
        sizee=sizee-2;
        return A[sizee];
    }
    else if(sizee>=0)
    {
        return A[--sizee];
    }
    else
        cout << "Stack empty\n";

}
