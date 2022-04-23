#include<iostream>
using namespace std;

int pivotElement(int *, int, int);

int binarySearch(int *, int, int, int);

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int data;
    cin>>data;
    int pivot = pivotElement(array, 0 ,n-1);
    int result;
    if(pivot==-1)
        result = binarySearch(array, 0, n-1,data);
    else if(array[pivot]==data)
        result = pivot;
    else if(array[0]<=data)
        result = binarySearch(array,0,pivot-1,data);
    else
        result = binarySearch(array, pivot, n-1, data);
    cout<<result;
    return 0;
}

int pivotElement(int *arr, int low, int high){
    int mid = low + (high-low)/2;
    if(low>=high)
        return -1;
    if(arr[mid]>arr[mid+1])
        return mid+1;
    if(arr[mid]<arr[mid-1])
        return mid;
    if(arr[0]<arr[mid])
        return pivotElement(arr,mid+1,high);
    return pivotElement(arr,low,mid-1); 
}

int binarySearch(int *arr, int l, int h, int val){
    int mid = l + (h-l)/2;
    if(val==arr[mid])
        return mid;
    if(val>arr[mid])
        return binarySearch(arr, mid+1, h, val);
    return binarySearch(arr,l,mid-1,val);
}