#include<iostream>
using namespace std;

bool stringCompare(string, string);

int main(){
    string s1,s2;
    cin>>s1>>s2;
    string s1_first = "";
    string s2_first = "";
    string s1_second = "";
    string s2_second = "";
    for(int i=0;i<s1.length()/2;i++)
        s1_first += s1[i];
    for(int i=0;i<s1.length()/2;i++)
        s2_first += s2[i];
    for(int i=s1.length()/2 + 1;i<s1.length();i++)
        s1_second += s1[i];
    for(int i=s1.length()/2 + 1;i<s1.length();i++)
        s2_second += s2[i];
    if(stringCompare(s1_first,s2_first) || stringCompare(s1_first,s1_second) || stringCompare(s1_second,s2_first) || stringCompare(s1_second,s1_second))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

bool stringCompare(string s1, string s2){
    if(s1==s2){
        return true;
    }
    else {
        return false;
    }   
}
