#include <iostream>
#define ll long long
using namespace std;

void reverse(ll [], ll, ll);
void printArray(ll [], ll);
  
int main(){
    int t=0;
    long long n=0,k=0;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll *array = new ll[n];
        for(ll i=0;i<n;i++){
            cin>>array[i];
        }
        k = k%n;
        reverse(array,0,n-1);
        printArray(array,n);
        reverse(array,0,k-1);
        printArray(array,n);
        reverse(array,k,n-1);
        printArray(array,n);
    }
}

void reverse(ll arr[],ll start, ll end){
  ll temp=0;
    while(start<end){
      temp = arr[start];
      arr[start++]=arr[end];
      arr[end--] = temp;
    }
}

void printArray(ll arr[], ll n){
    for(ll i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}