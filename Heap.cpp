#include<iostream>
using namespace std;

void Heapify(int A[],int n,int i)
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
        Heapify(A,n,li);
    }

}
void Removing(int A[],int n,int i)
{
    swap(A[0],A[n-1]);
    n = n-1;
    Heapify(A,n,i);
}

int main()
{
    int A[20];
    int n = 11,i,k;
    cout << "Enter the limit: ";
    cin >> k;
    cout<< "Enter values to heap: \n";
    for(i=0;i<k;i++)
    {
        cin >> A[i];
    }
    //Build A Heap
    for(i=n/2 - 1;i>=0;i--)
    {
        Heapify(A,n,i);
    }
    //Print The Heap
    cout << "A Heapified Array: \n";
    for(i=0;i<k;i++)
    {
        cout << A[i] << "  ";
    }
    cout << "\n\n";
    //Delete The Max value
    Removing(A,n,0);
    cout << "A Heapified Array After Deleting the top: \n";
    for(i=0;i<k-1;i++)
    {
        cout << A[i] << "  ";
    }


}
