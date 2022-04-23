#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    int even_moves=0,odd_moves=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i=i+2){
        if(i==0){
            sum += array[i] - min(array[i],array[i+1]-1);
        }
        else if(i==n-1)
            sum += array[i] - min(array[i],array[i-1]-1);
        else
            sum += array[i] - min(array[i],min(array[i-1]-1,array[i+1]-1));
        // cout<<sum<<" ";
    }
    // cout<<endl;
    even_moves = sum;
    sum = 0;
    for(int i=1;i<n;i=i+2){
        if(i==n-1)
            sum += array[i] - min(array[i],array[i-1]-1);
        else {
            sum += array[i] -  min(array[i],min(array[i-1]-1,array[i+1]-1));
        }
        // cout<<sum<<" ";
    }
    // cout<<endl;
    odd_moves = sum;
    cout<<min(even_moves,odd_moves);
    return 0;
}