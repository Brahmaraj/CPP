#include<iostream>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,max = -1;
        cin>>n;
        ll *array = new ll[n];
        for(ll i=0;i<n;i++){
            cin>>array[i];
        }
        for(ll i=n-1;i>=0;i--){
            if(array[i]>=max){
                cout<<array[i]<<" ";
                max = array[i];
                }
        }
        cout<<endl;
    }
    return 0;
}