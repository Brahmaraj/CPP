#include<iostream>
using namespace std;

int partition(int *, int, int);
void quickSort(int *, int, int);

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    quickSort(array, 0, n-1);
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
    
}

int partition(int *arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    int temp;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
}
void quickSort(int *arr, int low, int high){
    if(low>=high)
        return;
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot-1);
    quickSort(arr, pivot+1, high);
}