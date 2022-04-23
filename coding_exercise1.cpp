#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        cout<<i<<" ";
        if(i%5==0)
            cout<<"\n";
        i++;
    }
}