#include<iostream>
using namespace std;

void recursiveCombination(int *, int *, int, int, int, int);

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int k;
    cin>>k;
    int *new_arr = new int[k];
    recursiveCombination(array, new_arr, 0, n-1, 0, k);
}

// create a temporary array ‘data[]’ which stores all outputs one by one. The idea is to start from first index (index = 0) in data[], one by one fix elements at this index and recur for remaining indexes. Let the input array be {1, 2, 3, 4, 5} and r be 3. We first fix 1 at index 0 in data[], then recur for remaining indexes, then we fix 2 at index 0 and recur. Finally, we fix 3 and recur for remaining indexes. When number of elements in data[] becomes equal to r (size of a combination), we print data[].

void recursiveCombination(int *arr,int *rec_arr, int start, int end, int index, int r){
    if(index == r){
        for(int i=0;i<r;i++)
            cout<<rec_arr[i]; 
        cout<<endl; 
        return;
        }
    for(int j=start;j <= end && start - end <= r;j++){
        rec_arr[index] = arr[j];
        recursiveCombination(arr, rec_arr, j+1,end, index+1, r);
    }
}