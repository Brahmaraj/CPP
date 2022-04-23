#include<iostream>
using namespace std;

int checkPalindrome(int, int);


int main(){
    int t;
    cin>>t;
    while(t--){
        int number;
        cin>>number;
        int result = checkPalindrome(number,0);
        if(number==result)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    };
}

int checkPalindrome(int n, int sum=0){
    if(n==0)
        return sum;
    sum = sum*10 + n%10;
    return checkPalindrome(n/10,sum);
}