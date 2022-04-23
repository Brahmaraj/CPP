#include<iostream>
using namespace std;

void mergeSort(int *, int, int);

void merge(int *, int , int, int);

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    mergeSort(array, 0, n);
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
}

void merge(int *arr, int left, int mid, int right){
    int n1 = mid-left+1, n2 = right - mid;
    int i, j, k;
    int *leftarr = new int[n1+1];
    int *rightarr = new int[n2+1];
    i = 0, j = 0, k = left;
    for(int i=0;i<n1;i++){
        leftarr[i] = arr[left + i];
    }
    for(int i=0;i<n2;i++){
        rightarr[i] = arr[mid + 1 + i];
    }
    while(i<n1 && j<n2){
        if(leftarr[i]<=rightarr[j])
            arr[k++] = leftarr[i++];
        else 
            arr[k++] = rightarr[j++];
    }
    while(i<n1)
        arr[k++] = leftarr[i++];
    while(j<n2)
        arr[k++] = rightarr[j++];
    for(int i=0;i<right;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void mergeSort(int *arr, int left, int right){
    if(left>=right)
        return;

    int mid = left + (right-left)/2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}