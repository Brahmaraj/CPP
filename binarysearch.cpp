#include<iostream>
using namespace std;

int binarySearch(int *, int, int, int);

int main(){
    int n;
    cin>>n;
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int target;
    cin>>target;
    int index = binarySearch(arr, 0, n, target);
    cout<<index;
    return 0;
}

int binarySearch(int *arr, int l, int h, int value){
    if(l>h)
        return -1;
    int mid = l+((h-1)/2);
    if(arr[mid]==value)
        return mid;
    else if(arr[mid]>value)
        return binarySearch(arr, l, mid-1, value);
    return binarySearch(arr, mid+1, h, value);
}   