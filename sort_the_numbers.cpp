#include <bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
    int hash[3];
    int t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      ll *arr =(ll *)malloc(n*sizeof(ll));
      for(ll i=0; i<n; i++)
        cin>>arr[i];
      for(int i=0;i<3;i++)
        hash[i] = 0;
      for(ll i=0; i<n ;i++)
        hash[arr[i]]++;
    ll i = 0;
    while(hash[0]>0){
        hash[0]--;
        arr[i] = 0;
        i++;
    }
    while(hash[1]>0){
        hash[1]--;
        arr[i] = 1;
        i++;
    }
    while(hash[2]>0){
        hash[2]--;
        arr[i] = 2;
        i++;
    }
    
    for(ll i=0;i<n;i++)
        cout<<arr[i]<<" ";
      cout<<endl;
        
    }
    return 0;
  }