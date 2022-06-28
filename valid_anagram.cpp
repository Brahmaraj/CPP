#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int arr[26] = {0};
    for(int i=0;i<s.length();i++){
        arr[s[i]-97]++;
    }
    for(int i=0;i<t.length();i++){
        arr[t[i]-97]--;
    }
    string result;
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            result = "false";
            break;
            }
        result = "true";
    }
    cout<<result<<endl;
}