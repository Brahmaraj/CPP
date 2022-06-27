#include<iostream>
#define ll long long
using namespace std;

int main()
{
  ll n,k;
  cin>>n>>k;
  ll *arr = (ll *)malloc(n*sizeof(int));
  for(ll i=0;i<n;i++)
    cin>>arr[i];
  int i = 0;
  int sum_of_books = 0;
  int mid = n/2;
  while(i<n){
    if(arr[i]<=k)
      sum_of_books++;
    else
      break;
    i++;
  }
  int j = n - 1;
  while(j>i){
    if(arr[j]<=k)
      sum_of_books++;
    else
      break;
    j--;
  }
  cout<<n-sum_of_books;
}