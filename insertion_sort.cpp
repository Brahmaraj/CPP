#include<iostream>
using namespace std;

void insertionSort(int *, int);

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    insertionSort(array, n);
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
}

void insertionSort(int *arr, int n){
    int v,j;
    for(int i=1;i<n;i++){
        j = i;
        v = arr[i];
        while(arr[j-1]>v && j>=1){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = v;
    }
}