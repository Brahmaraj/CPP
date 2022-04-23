#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string *str = new string[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    
    string cmp = str[0];
    for(int i=0;i<n-1;i++){
        string temp = "";
        for(int j=0;j<str[i].size() && j<str[i+1].size();j++){
            if(cmp[j]==str[i+1][j])
                temp += str[i][j];
        }
        cmp = temp;
    }
    cout<<cmp;
}