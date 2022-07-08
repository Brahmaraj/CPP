#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int arr = 0;
    int subparts = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            arr--;
        else
            arr++;
        if(arr==0)
            subparts++;
    }
    cout<<subparts<<endl;
}