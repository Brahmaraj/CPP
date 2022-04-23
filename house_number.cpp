#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int num,original,extra=0,count = 0;
        cin>>num;
        original = num;
        while(num>0){
            num=num/10;
            count++;
        }
        long long digits = original * count;
        for(int i=0;i<count-1;i++){
            for(int j=0;j<=i;j++){
                extra = extra + pow(10,j)*9;
            }
        }
        if(original>9){
            digits = digits - extra;
            cout<<digits<<endl;
        }
        else {
            cout<<original;
        }   
    }

    return 0;
}