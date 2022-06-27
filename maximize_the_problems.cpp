#include<iostream>
using namespace std;

int binarySearch(int, int, int);

int main()
{
 int n,k;
 cin>>n>>k;
 int number = binarySearch(k, 1, n);
 cout<<number<<"\n";
  return 0;
}

int binarySearch(int k, int low, int high){
  
    int mid = (low+high)/2;
    int sum = ((mid*(mid+1))/2)*5;
    if(low>=high)
    return mid;
    if(240-k>sum && ((((mid+1)*(mid+2))/2)*5)>240-k){
     return mid; 
    }
    else if(240-k>sum){
      binarySearch(k, mid+1, high);
    }
    else if(240-k<sum){
      binarySearch(k, low, mid-1);
    }
}