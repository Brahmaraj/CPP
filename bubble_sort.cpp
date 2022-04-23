#include<iostream>
using namespace std;

void bubbleSort(int *, int);

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    bubbleSort(array, n);
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
    return 0;
}

void bubbleSort(int *arr, int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            int notSwapped = 1;
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                notSwapped = 0;
            }
            if(notSwapped)
                break;
        }
    }
}