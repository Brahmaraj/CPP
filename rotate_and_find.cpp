#include <iostream>
#define ll long long
using namespace std;

ll binarySearch(ll *, ll, ll, ll);

int main()
{
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll *arr = (ll *)malloc(n*sizeof(int));
    for(ll i = 0;i<n;i++)
      cin>>arr[i];
    ll  rotate = 0;
    for(ll i=1;i<n;i++)
        if(arr[i]<arr[i-1]){
            rotate = i;
            }
    ll value;
    cin>>value;
    int brotate = binarySearch(arr, 0, rotate-1, value);
    int arotate = binarySearch(arr, rotate, n, value);
    ll result = brotate>arotate?brotate:arotate;
    cout<<result<<endl;
  }
  return 0;
}

ll binarySearch(ll *arr, ll low, ll high, ll val){
  if(low>high)
    return -1;
    ll mid = (low+high)/2;
    if(arr[mid]==val)
      return mid;
    else if(arr[mid]>val)
      binarySearch(arr, low, mid-1, val);
    else if(arr[mid]<val)
      binarySearch(arr, mid+1, high, val);
}