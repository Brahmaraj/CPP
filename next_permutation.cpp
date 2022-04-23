#include<iostream>
using namespace std;

void reverseArray(int [], int, int);

int main(){
    int n, pivot_el=0, repl=0;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
        }
    for(int i=n-2;i>=0;i--){
        if(array[i]<array[i+1]){
            pivot_el = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(array[i]>array[pivot_el]){
            repl = i;
            break;
            }
    }
    if(pivot_el==0)
        reverseArray(array, 0,n-1);
    else {
    int temp = array[pivot_el];
    array[pivot_el] = array[repl];
    array[repl] = temp;
    reverseArray(array,pivot_el+1,n-1);
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<' ';
    }
    return 0;
}

void reverseArray(int arr[], int start, int end){
    int temp;
    while(start<end){
        temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}