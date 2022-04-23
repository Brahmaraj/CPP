#include<iostream>
using namespace std;

int main(){
    int n,rev;
    cin>>n;
    rev=0;
    while(n>0){
        rev = rev*10 + n%10;
        n /= 10;
    }
    cout<<rev;
    return 0;
}