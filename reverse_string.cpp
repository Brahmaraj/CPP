#include<iostream>
#include<string>
using namespace std;

void revString(char *, int, int);

int main(){
    char str[11] = {'a','b','c','d','e','f','g','h','i','j','k'};
    revString(&str[0],0,10);
    cout<<str;
}

void revString(char * str, int left, int right){
    if((left)==5)
        return;
    char temp = str[right];
    str[right] = str[left];
    str[left] = temp;
    revString(str, left+1,right-1);
}