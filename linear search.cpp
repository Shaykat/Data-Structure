#include<iostream>
using namespace std;

int list[100];
void  Linear_Search(int item,int n)
{
	int found = 0;

	for (int i=0; i<n; i++)
	{
		if ( list[ i ] == item )
		{
			cout<< item <<"  Found at position  " << i << endl;
			found = 1;
			break;
		}
	}
	if (found == 0)
		cout<< item <<"  Not Found at the list  " << endl;


}

int main()
{
    int n, item;
    cout<<" Enter the number of element of your array"<<endl;
    cin >> n;

    cout<<" Enter the "<< n <<"  elements:" << endl;
    for(int i=0; i<n; i++)
    	cin >> list[i];

cout<<"The list is: "<<endl;
   	 for(int i =0; i<n; i++)
        cout<<" list["<<i<<"] =" <<list[i]<<endl;

 cout<<" Enter the item you search for : "<<endl;
   	 cin >> item;

// Call for Linear_Search function to find your item:
   	 Linear_Search(item,n);

    return 0; } // Now define the function here

