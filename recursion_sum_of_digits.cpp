#include<iostream>
using namespace std;

int recursiveSum(int);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<recursiveSum(n);
        cout<<"\n";
    }
}

int recursiveSum(int n){
    if(n==0)
        return 0;
    return n%10 + recursiveSum(n/10);
}