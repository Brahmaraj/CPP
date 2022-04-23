#include<iostream>
using namespace std;

void rotate(int [], int, int);
void printArray(int [], int);

int main(){
    int n,count=0,unique_elements = 0;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    printArray(array,n);
    int i=0;
    while(i<n){
        if(array[i]==array[i+1] && i<=(n-count)){
            rotate(array,i,n); 
            count++;
            unique_elements = i+1;  
        }
        else 
            i++;
        
    }

}

void rotate(int arr[], int start, int end){
    for(int i=start;i<end-1;i++){
        arr[i] = arr[i+1];
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}