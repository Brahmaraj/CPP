#include<iostream>
using namespace std;

int factorial(int);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<factorial(n);
        cout<<"\n";
    }
}

int factorial(int n){

    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    
    return n*factorial(n-1);
}