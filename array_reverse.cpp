#include<iostream>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    int *array = new int[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0,j=n-1;i<n/2;i++,j--){
        temp = array[i];
        array[i]=array[j];
        array[j]=temp;
    };

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}