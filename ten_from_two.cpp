// Let us solve a fun maths question now. Just do the simple calculation behind it and you are done. You are given a number n and you are asked to make n divisible by 10. The only operation you can do on n is to multiply by 2.Given n find out how many operations are required to make n divisible by 10.

#include<iostream>
using namespace std;
  
int main(){
    int n,number;
    cin>>n;
    while(n--){
        cin>>number;
        int count=0;
        int mod = number%10;
        if(number%5==0){
          while(mod){
              count++;
              number *=2;
              mod = number%10;
          }
          cout<<count<<"\n";
        }
        else
          cout<<"-1\n";
      
    }
    return 0;
}