#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int i,j,m,n;
    cout << "Row: ";
    cin >> m;
    cout << "column: ";
    cin >> n;

    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
             cout << "Row " << i+1 << " column " << j+1 << ": ";
             cin >> a[i][j];
         }
    }


     for(i=0;i<m;i++)
    {

         for(j=0;j<n;j++)
         {

             cout << a[i][j] << "\t";

         }
         cout << "\n\n";

    }
}
