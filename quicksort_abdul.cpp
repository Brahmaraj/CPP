#include<iostream>
using namespace std;

int partition(int *, int, int);
void quickSort(int *, int, int);

int main(){
    int n;
    cin>>n;
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quickSort(arr ,0,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int partition(int *arr, int l, int h){
    int i,j;
    i = l,j=h;
    int pivot = arr[l];
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[j];
    arr[j] = arr[l];
    arr[l] = temp;
    return j;
}

void quickSort(int *arr, int l, int h){
    if(l<h){
        int j = partition( arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j+1, h);
    }
}