#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int a[20];

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
    getch();
    system("cls");
}

void binary_search(int n,int iteam)
{
    int f=0,l=n-1,ff=0,mid=0,position=-1;

    for(;ff==0 && f<=l;mid=f+l/2)
    {
        if(iteam == a[mid])
        {
            ff=1;
            position = mid;
        }
        else if(iteam > a[mid])
        {
            f=mid+1;
        }

        else if(iteam < a[mid])
        {
            l=mid-1;
        }
    }

    if(position < 0)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found " << iteam << " at " << position+1 << " position" << endl;
    }

}

int main()
{
    int i,n,iteam;
    cout << "Enter N: ";
    cin >> n;

    cout << "Enter the elements of array:....." << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "press any key to see the sorted elements....";
    clear_screen();
    selection_sort(n);
    cout << "Enter which value you want to search......" << endl;
    cin >> iteam;
    cout << "Press any key to see the position of the searching element..." << endl;
    clear_screen();
    binary_search(n,iteam);

    return 0;
}
