// Tina and Rahul have got 
// N
//  bags of chocolates. Both of them love chocolates and want to get the maximum number of chocolates for themselves. So, they came up to an agreement of choosing chocolate bags. They will take the chocolate bags in turns. In each turn, one of them can choose one of the remaining bags and keep it with herself/himself.

// PrepBuddy wants to know the maximum number of chocolates that can Tina collect assuming that Tina takes the first turn
#include<iostream>
using namespace std;

int partition(int *, int, int);
void quickSort(int *, int, int);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr = (int *)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        quickSort(arr, 0, n);
        int chocolates = 0;
        for(int i=n-1;i>=0;i=i-2)
            chocolates += arr[i];
        cout<<chocolates<<endl;
    }

}

int partition(int *arr, int l, int h){
    int i,j,pivot;
    pivot = arr[l],i=l,j=h;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int *arr, int l, int h){
    if(l<h){
        int j = partition(arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j+1, h);
    }
}