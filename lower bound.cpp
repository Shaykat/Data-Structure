#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;

int lowerBound(int arr[],int k,int n){
    int beg,ed,index,mid=0;

    beg = 0;
    ed = n - 1;

    while(beg <= ed){
        mid = (beg + ed)/2;
        if(k == arr[mid]){
            index = mid;
            ed = mid - 1;
        }
        else if(k > arr[mid]){
            beg = mid + 1;
        }
        else {
            ed = mid - 1;
        }
    }
    return beg;
}

int uperBound(int arr[],int p,int n){
    int beg,ed,index,mid=0;

    beg = 0;
    ed = n - 1;

    while(beg <= ed){
        mid = (beg + ed)/2;
        if(p == arr[mid]){
            index = mid;
            beg = mid + 1;
        }
        else if(p > arr[mid]){
            beg = mid + 1;
        }
        else {
            ed = mid - 1;
        }
    }
    return beg;
}

int main(){
    int arr[100];
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+5);
    //cin >> k;
    cout << "lower bound: " << lowerBound(arr,6,5) << endl;
    cout << "uper bound: " << uperBound(arr,10,5) << endl;
}
