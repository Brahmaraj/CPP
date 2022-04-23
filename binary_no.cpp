#include<iostream>
#include<string>
using namespace std;

void recursiveBinary(string, int);

int main(){
    int n;
    cin>>n;
    string s = "";
    recursiveBinary(s,n);
}

void recursiveBinary(string bin, int n){
    if(n==0){
        string::reverse_iterator srit;
        for(srit=bin.rbegin();srit!=bin.rend();srit++)
            cout<<*srit;
        return;
    }
    else if(n%2==0){
        recursiveBinary(bin+'0',n/2);
    }
    else if(n%2==1){
        recursiveBinary(bin+'1',n/2);
    }
}