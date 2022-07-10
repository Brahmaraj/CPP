#include<iostream>
using namespace std;

bool stringCompare(int *, int *, int);

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int s1_first[26] = {0};
    int s2_first[26] = {0};
    int s1_second[26] = {0};
    int s2_second[26] = {0};
    for(int i=0;i<s1.length()/2;i++)
        s1_first[s1[i]-'a']++;
    for(int i=0;i<s1.length()/2;i++)
        s2_first[s2[i]-'a']++;
    for(int i=s1.length()/2;i<s1.length();i++)
        s1_second[s1[i]-'a']++;
    for(int i=s1.length()/2;i<s1.length();i++)
        s2_second[s2[i]-'a']++;
    if(stringCompare(s1_first,s2_first, s1.length()/2) || stringCompare(s1_first,s2_second,s1.length()/2) || stringCompare(s1_second,s2_first,s1.length()/2) || stringCompare(s1_second,s2_second,s1.length()/2))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

bool stringCompare(int * s1, int * s2, int n){
    for(int i=0;i<n;i++)
        if(s1[i]!=s2[i])
            return false;
    return true;
}
