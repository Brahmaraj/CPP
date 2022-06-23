#include<iostream>
#define ll long long
using namespace std;

ll partition(ll *, ll, ll);
void quickSort(ll *, ll, ll);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll *arr = (ll *)malloc(n*sizeof(int));
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        quickSort(arr, 0, n);
        for(ll i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

}

ll partition(ll *arr, ll l, ll h){
    ll i,j,pivot;
    pivot = arr[l],i=l,j=h;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            ll temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    ll temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(ll *arr, ll l, ll h){
    if(l<h){
        ll j = partition(arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j+1, h);
    }
}