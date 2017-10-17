#include<iostream>
using namespace std;

int a[20];

void bouble_sort(int n)
{
    int i,j,temp,swp=0,flag,pass=0;

    for(i=1;i<n;i++)
    {
        flag = 0;
        for(j=0;j<n-i;j++)
        {
           if(a[j]>a[j+1])
           {
              /* temp = a[j];
               a[j]=a[j+1];
               a[j+1]=temp;*/
               swap(a[j],a[j+1]);

               flag=1;
               swp =swp+1;
           }

        }

        pass++;

        if(flag == 0)
        break;
    }
    cout << "total pass: " << pass << "\n" << "total swap: " << swp << endl;
    cout << "Sorted elements of the array by BOUBLE SORT: " << endl;
    for(i=0;i<n;i++)
    {
        cout << "list[" << i << "] = " << a[i] << endl;
    }
}

int main()
{
    int i,n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: " << endl;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    bouble_sort(n);

    return 0;
}
