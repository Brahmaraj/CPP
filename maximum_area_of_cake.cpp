#include<iostream>
using namespace std;

int main(){
    int n,k,A,B,a1,a2;
    cin>>n>>k>>A>>B;
    cin>>a1>>a2;

    int *hashArr = (int *)malloc((2^n)*sizeof(int));
    for(int i=0;i<n;i++){
        if(i!=a1 && i!=a2)
            hashArr[i] = 0;
        
    }
}