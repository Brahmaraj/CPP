#include<iostream>
using namespace std;

void selectionSort(int *, int);

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    selectionSort(array, n);
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
}

void selectionSort(int *arr, int n){
    int temp,min;
    for(int i=0;i<n-1;i++){
        min = i; //consider i-th element as min
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min = j;
        }
        temp = arr[min];  //swapping 1,2,3..n min with i=th element
        arr[min] = arr[i];
        arr[i] = temp;
    }
}