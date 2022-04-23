#include<iostream>
using namespace std;

int binarySearch(int [], int, int, int );

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int low = 0,high = n-1;
    int mid;
    int data;
    cin>>data;
    int result = binarySearch(array, low, high, data);
    cout<<result;
    // while(low<=high){
    //     mid = low + (high-low)/2;
    //     if(array[mid]==data){
    //         cout<<mid<<" ";
    //         break;
    //     }
    //     if(array[mid]>data)
    //         high = mid -1;
    //     else 
    //         low = mid +1;
    // }
    // if(low>high)
    //     cout<<"Didn't find";
}

int binarySearch(int arr[], int low, int high, int data){
    if(low>high)
        return -1;

    int mid = low + (high-low)/2;

    if(arr[mid]==data)
        return mid;
    else if(arr[mid]>data)
        return binarySearch(arr, low, mid-1, data);
    else 
        return binarySearch(arr, mid+1, high, data);
}