#include<iostream>
using namespace std;

int list[20];

void Selection_Sort (int n)
{
	int min, min_index,  i;

	//select the location and find the minimum value
	for (int select = 0; select < n-1; select++) // discard last index
	{
		min = list [select ];
		min_index = select;

	for ( i= select+1;   i < n ;   i++) //start from the next of selected one to find minimum
	{
		if( min > list [i] )
		{
			min = list [i];
			min_index = i;
		}
	}
	list [ min_index] = list [select];
	list [select] = min;
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
        cin >> list[i];
    }

    Selection_Sort (n);

    cout << "sorted elements of the array are: " << endl;
    for(i=0;i<n;i++)
    {
        cout << list[i] << endl;
    }

    return 0;
}


