#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

int a[20];

void bouble_sort(int n);
void selection_sort(int n);
void clear_screen();

int main()
{
    int i,n;
    char ch = '\r';

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: " << endl;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    bouble_sort(n);
    cout << "press ENTER to see the sorted elements by slection sort....";

    ch=getch();
    if(ch == '\r')
    {
        clear_screen();
        selection_sort(n);
    }

    return 0;
}

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

void selection_sort(int n)
{
    int pass=0;
    int i;
    int min,min_index;

    for(pass=0;pass<n-1;pass++)
    {
        min=a[pass];
        min_index = pass;

        for(i=pass+1;i<n;i++)
        {
            if( min > a[i])
            {
                min=a[i];
                min_index = i;
            }

        }
        if(min_index != pass)
        {
            //a [ min_index] = a [pass];
            //a [pass] = min;
           swap(a[pass],a[min_index]);
        }
    }

    cout << "Sorted elements of the array by SELECTION SORT: " << endl;
    for(i=0;i<n;i++)
    {
        cout << "list[" << i << "] = " << a[i] << endl;
    }
}

void clear_screen()
{
    system("cls");
}

