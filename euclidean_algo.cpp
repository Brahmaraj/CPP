#include<iostream>
using namespace std;

int main(){
   int n,d;
   cin>>n>>d;
   int numerator = n;
   int denominator = d;
   while(d!=0){
      int temp = d;
      d = n%d;
      n = temp;
   }
   cout<<numerator/n<<"/"<<denominator/n;
   return 0;
}