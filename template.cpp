#include<iostream>
using namespace std;

template <class T,class T1>
void print(T a,T1 b){
    cout<<b+a;
};

int main(){
    print(5.7, 99);
    return 0;
}