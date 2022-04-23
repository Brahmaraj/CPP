#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    string::iterator f_sit;
    string::reverse_iterator r_sit;
    for(int i =0;i<str.length();i++){
        for(int j=0;j<=i;j++){
            cout<<str[j];
        }
        cout<<endl;
    }
    for(int i=str.length();i>=0;i--){
        for(int j=str.length();j>=i;j--){
            cout<<str[j];
        }
        cout<<endl;
    }


    return 0;
}