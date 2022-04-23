#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll *array = new ll[n];
        for(ll i=0;i<n;i++)
            cin>>array[i];
        for(ll i=0;i<n;i++){
            if(array[i]>x){
                cout<<i-1;
                break;
                }
            else if(array[i]==x){
                cout<<i;
                break;
            }
        }
        if(array[n-1]<x)
            cout<<n-1;
        cout<<endl;
    }
}