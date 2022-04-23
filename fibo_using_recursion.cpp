#include<iostream>
using namespace std;

int fibonacciSeries(int);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int answer = fibonacciSeries(n);
        cout<<answer<<"\n";
    }
}

int fibonacciSeries(int n){
    if(n==1 || n==0)
        return n;
    else{
        return (fibonacciSeries(n-1)+fibonacciSeries(n-2));
    }
}