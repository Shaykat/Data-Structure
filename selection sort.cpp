#include<iostream>
using namespace std;

void selection_sort(int a[],int n)
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

    cout << "Sorted elements of the array by selection sort: " << endl;
    for(i=0;i<n;i++)
    {
        cout << "list[" << i << "] = " << a[i] << endl;
    }
}

int main()
{
    int a[20];
    int i,n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: " << endl;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    selection_sort(a,n);

    return 0;
}

