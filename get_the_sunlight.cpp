#include<iostream>
#define ll long long
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll *array = new ll[n];
    for(ll i = 0; i<n ; i++){
      cin>>array[i];
    }
    ll count = 1;
    ll max = array[0];
    for(ll i=1;i<n;i++){
        if(array[i]>=max){
            count++;
            max = array[i];
            }
    }
    cout<<count<<endl;
  }
  
  return 0;
}