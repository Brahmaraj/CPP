#include<iostream>
#define ll long long
using namespace std;
  
void rearrangeArray(ll [], ll);

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll *array = new ll[n];
        for(ll i=0;i<n;i++){
            cin>>array[i];
        }
        rearrangeArray(array,n);
        for(ll i=0;i<n;i++){
            cout<<array[i]<<" ";
        }
    }
    return 0;
}

void rearrangeArray(ll arr[], ll n)
{
    // Auxiliary array to hold modified array
    ll *temp = new ll[n];
 
    // Indexes of smallest and largest elements
    // from remaining array.
    int small = 0, large = n - 1;
 
    // To indicate whether we need to copy remaining
    // largest or remaining smallest at next position
    int flag = true;
 
    // Store result in temp[]
    for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
 
        flag = !flag;
    }
 
    // Copy temp[] to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}