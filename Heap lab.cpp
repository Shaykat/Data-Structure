#include<iostream>
using namespace std;

void Max_Heapify(int A[],int n,int i)
{
    int temp;
    int li;
    if(i<n && 2*i+1 <n && (A[2*i+1] > A[i]) && (A[2*i+1] > A[2*i+2]))
    {
        li=2*i+1;
    }
    else if(i<n && 2*i+2 <n && (A[2*i+2] > A[i]) && (A[2*i+2] > A[2*i+1]))
    {
        li=2*i+2;
    }
    else
    {
        li=i;
    }

    if(li != i)
    {
        temp = A[i];
        A[i] = A[li];
        A[li] = temp;
        Max_Heapify(A,n,li);
    }

}
void build_heap(int A[],int n,int i)
{
    for(i=n/2 - 1;i>=0;i--)
    {
        Max_Heapify(A,n,i);
    }
   cout << "Elements of Heap: ";
   for(i=0;i<n;i++)
   {
       cout << A[i] << "  " ;
   }
}
int Removing(int A[],int n,int i)
{
    int k;
    k=n;
    swap(A[0],A[k-1]);
    k = k-1;
    Max_Heapify(A,k,0);
}

void heap_sorted(int A[],int n,int i)
{
    for(i=0;i<n-1;i++)
    {
        Removing(A,n,0);
    }

   cout << "Sorted data after heap sort: ";
   for(i=0;i<n;i++)
   {
       cout <<A[i] << "  " ;
   }
   cout << endl;
}

int main()
{
   int a[20];
   int n,i;

   cout << "Enter the limit of array: " << endl;
   cin >> n;
   cout << "Enter the elements of array: " << endl;
   for(i=0;i<n;i++)
   {
       cin >> a[i];
   }
   //elements of array
   cout << "Elements of CBT: ";
   for(i=0;i<n;i++)
   {
       cout << a[i] << "  " ;
   }
   cout << endl;

   //parents & their children
   /*cout << "Enter I: " ;
   cin >> i;
   if(i==0)
   {
       cout << "ith value : " << a[i] << ", This is Root" << endl;
       cout << "parent: " << "NO parent" << "\nLeft Child: " << a[2*i+1] << "\nRight Child: " << a[2*i+2] << endl;
   }
   else
   {
        cout << "ith value : " << a[i] << endl;
        cout << "parent: " << a[(i-1)/2] << "\nLeft Child: " << a[2*i+1] << "\nRight Child: " << a[2*i+2] << endl;
   }*/
   //Adjust ith element
   Max_Heapify(a,n,0);
   /*cout << "Elements of Heap after adjusted the ith value: " << endl;
   for(i=0;i<n;i++)
   {
       cout << a[i] << "  " ;
   }
   cout << endl;*/

   //Build A Heap
   build_heap(a,n,i);
   //Renove elements
    /*Removing(a,n,0);
    cout << "\nHeapified Array After Deleting the top: \n";
    for(i=0;i<n-1;i++)
    {
        cout << a[i] << "  ";
    }*/
    cout << endl;
    //heap sort
    heap_sorted(a,n,i);



}
