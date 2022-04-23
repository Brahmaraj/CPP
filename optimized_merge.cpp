#include<iostream>
using namespace std;

void mergeSort(int [], int);

void mergeSort(int [], int [], int, int);

void merge(int [], int [], int, int, int);

int main(){

    int n;
    cin>>n;
    int *array = new int(n);
    for(int i=0;i<n;i++)
        cin>>array[i];

    mergeSort(array, n);
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
    return 0;
}

void mergeSort(int array[], int n){
    int *helper = new int(n);
    mergeSort(array, helper, 0, n-1);
}

void mergeSort(int array[], int helper[], int low, int high){
    if(low>=high)
        return;
    int mid = low + (high-low)/2;
    mergeSort(array, helper, low, mid);
    mergeSort(array, helper, mid + 1, high);
    merge(array, helper, low, mid, high);
}

void merge(int array[], int helper[], int low, int mid, int high){

    for(int i=low;i<=high;i++)
        helper[i] = array[i];

    int helperleft = low;
    int helperright = mid + 1;
    int current = low;

    while(helperleft <= mid && helperright <= high){
        if(helper[helperleft]<=helper[helperright])
            array[current++] = helper[helperleft++];
        else
            array[current++] = helper[helperright++];
    }

    int remaining = mid - helperleft;
    for(int i=0;i<=remaining;i++)
        array[current+i] = helper[helperleft+i];

}