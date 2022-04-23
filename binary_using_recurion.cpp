#include<iostream>
using namespace std;

void generateBinary(int [], int, int);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *array = new int[n];
        array[0] = 0;
        int i=0;
        generateBinary(array,i+1,n);
        array[0] = 1;
        generateBinary(array,i+1,n);
    }
}

void generateBinary(int arr[], int i, int n){
    if(i==n){
        for(int j=0;j<n;j++)
            cout<<arr[j]<<" ";
        cout<<endl;
        return;
    }
    if(arr[i-1]==1){
        arr[i] = 0;
        generateBinary(arr,i+1,n);
    }
    if(arr[i-1]==0){
        arr[i]=0;
        generateBinary(arr,i+1,n);
        arr[i]=1;
        generateBinary(arr,i+1,n);
    }
}