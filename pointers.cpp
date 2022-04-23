#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *b = &a;
    cout<<a<<endl;
    cout<<*&a<<"\n";
    cout<<b<<"\n";
    return 0;
}