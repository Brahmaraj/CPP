#include<iostream>
using namespace std;

int main(){
    long long num = 0,count=0,final_num;
    int n;
    cin>>n;
    int *digits = new int[n];
    for(int i=0;i<n;i++){
        cin>>digits[i];
    }
    for(int i=0;i<n;i++){
        num*=10;
        num+=digits[i];
    }
    num = num+1;
    final_num = num;
    while(num>0){
        num = num/10;
        count++;
    }
    int *array = new int[count];
    for(int i=count-1;i>=0;i--){
        array[i] = final_num%10;
        final_num  = final_num/10;
    }
    for(int i=0;i<count;i++){
        cout<<array[i]<<" ";
    }
}