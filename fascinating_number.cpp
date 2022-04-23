#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num,first,second,third,fourth,original;
        cin>>num;
        original = num;
        first = num/1000;
        num %= 1000;
        second = num/100;
        num %= 100;
        third = num/10;
        fourth = num%10;
        while(first==second || first==third || first==fourth || second==third || second==fourth || third==fourth || original<=1234){
            original+=1;
            num = original;
            first = num/1000;
            num %= 1000;
            second = num/100;
            num %= 100;
            third = num/10;
            fourth = num%10;
        }
        cout<<original<<"\n";
    }
    return 0;
}