#include<iostream>
using namespace std;

int binarySearch(int *,int ,int );

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *array = new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        if(array[0]==1)
            cout<<0<<endl;
        else {
        int result = binarySearch(array, 0, n-1);
        cout<<result<<endl;
        }
    }
}

int binarySearch(int *arr,int l,int h){
    int mid = l+ (h-l)/2;
    if(l>h)
        return -1;
    if(arr[mid]==1 && arr[mid-1]==0)
        return mid;
    if(arr[mid]==1 && arr[mid-1]==1)
        return binarySearch(arr,l,mid-1);
    return binarySearch(arr,mid+1,h);
}