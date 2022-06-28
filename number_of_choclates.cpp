#include<iostream>
using namespace std;

int partition(int *, int, int);

void quickSort(int*, int, int);

int main(){
  int n;
  cin>>n;
  int *arr = (int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
    cin>>arr[i];
  quickSort(arr, 0, n);
  int q;
  cin>>q;
  int *x = (int *)malloc(q*sizeof(int));
  for(int i=0;i<q;i++)
    cin>>x[i];
  for(int i=0;i<n;i++){
    for(int j=0;j<q;j++){
      if(x[j]>arr[i]){
        cout<<i<<"\n";
        break;
      }
      else if(j==q-1)
        cout<<q<<"\n";
    }
  }
  return 0;
}



int partition(int *arr, int l, int high){
  int i,j,pivot;
  i = l, j = high, pivot = arr[l];
  while(i<j){
    do{
      i++;
    }while(arr[i]<=pivot);
    do{
      j--;
    }while(arr[j]>pivot);
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  int temp = arr[l];
  arr[l] = arr[j];
  arr[j] = temp;
  return j;
}

void quickSort(int *arr, int low, int high){
  if(low>=high)
    return;
  int j = partition(arr, low, high);
  quickSort(arr, low, j);
  quickSort(arr, j+1, high);
}