#include<iostream>
using namespace std;

void reverse(int [],int,int);
void rotate(int [], int);
void printArray(int [],int);

int main(){

    
    int n,l,r;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    //Brute Force Approach
    // cout<<"Left Rotate by how many places";
    // cin>>l;
    // int *temp = new int[l];
    // for(int i=0;i<l;i++){
    //     temp[i] = array[i];
    // }

    // for(int i=0;i<n-l;i++){
    //     array[i] = array[i+l];
    // }
    // for(int i=n-l,j=0;i<n,j<l;i++,j++){
    //     array[i]=temp[j];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<array[i]<<" ";
    // }
    /* ************************************************************************************* */

    //Less space complexity more time complexity
    // cout<<"Enter No. of times to rotate\n";
    // cin>>l;
    // for(int i=0;i<l;i++){
    //     rotate(array,n);   // rotating for d no. of times and not creating additional array
    // }

    // for(int i=0;i<n;i++){
    //     cout<<array[i]<<" ";
    // }


    //Efficient Array Reversal Algorithm
    cout<<"Enter no to rotate\n";
    cin>>l;
    cout<<"Before Rotate\n";
    printArray(array,n);

    reverse(array,0,l);     //Array reversal technique (reverse 1 to d)
    printArray(array,n);
    
    reverse(array,l,n);       // reverse (d to n-1)
    printArray(array,n);
    
    reverse(array,0,n);           //reverse whole array
    
    cout<<"After Rotate\n";
    printArray(array,n);

    return 0;
}

void reverse(int arr[],int start,int end){
    int temp=0;
    // while(start<end){
    //     temp = arr[start];
    //     arr[start++] = arr[end];
    //     arr[end--] = temp;
    // }
    for(int i=0,j=end-1;i<(end-start)/2;i++,j--){ 
        temp = arr[i+start];
        arr[i+start] = arr[j];
        arr[j] = temp;
    }
}

void rotate(int arr[], int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}