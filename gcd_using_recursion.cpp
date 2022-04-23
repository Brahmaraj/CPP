#include<iostream>
using namespace std;

int gcd(int, int);

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int answer = gcd(n,m);
    cout<<answer<<"\n";
    }
}

int gcd(int n, int m){
    if(n==0)
        return n;
    if(m==0)
        return m;
    if(n==m)
        return n;
    if(n>m)
        return gcd(n-m,m);
    return gcd(n,m-n);
}