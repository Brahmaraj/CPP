#include<iostream>
#include<math.h>
using namespace std;

int minCost(int *, int, int);

int main(){
    int n;
    cin>>n;
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        cin>>*(arr+i);
    int sum = 0;
    sum = min(minCost(arr, 0, n),minCost(arr, 1, n));
    cout<<sum;
    return 0;
}

int minCost(int *arr, int index, int size){
    if(index>=size)
        return 0;
    return min(arr[index] + minCost(arr, index+1, size), arr[index] + minCost(arr, index+2, size));
}