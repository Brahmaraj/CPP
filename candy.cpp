/* There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children. */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr = (int *)malloc(n*sizeof(int));
    int *candyArr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        cin>>arr[i];
        candyArr[i] = 1;
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            candyArr[i] = candyArr[i-1]+1;
    }
    cout<<"\ncandy arr: ";
    for(int i=0;i<n;i++){
        cout<<candyArr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1] && candyArr[i]<=candyArr[i+1])
            candyArr[i] = candyArr[i+1]+1;
    }
    cout<<endl;
    cout<<"rating array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"candy array: ";
    for(int i=0;i<n;i++){
        cout<<candyArr[i]<<" ";
    }
}