#include<iostream>
#define ll long long
using namespace std;

// int binarySearch(int , int, int);

// int binarySearch(int low, int high, int x){
//     if(low>=high)
//         return -1;
//     int mid = low + (high-low)/2;
//     if(mid * mid == x)
//         return mid;
//     else if(mid * mid > x)
//         binarySearch(low, mid-1, x);
//     else
//         binarySearch(mid+1, high, x);
// }

int main(){
    ll n;
    cin>>n;
    ll low = 0, high = n;
    while(low < high){
        ll mid = low + (high - low)/2;
        ll temp = mid * mid;
        if(temp == n) cout<<temp<<"mid";
        else if(temp < n) low = mid + 1;
        else high = mid - 1;
    }
    cout<<low -1<<"end";
}
