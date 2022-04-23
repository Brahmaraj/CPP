#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int hash_array[26];
    for(int i = 0;i<26;i++){
        hash_array[i] = 0;
    }
    for(int i=0;i<str.size();i++){
        if(hash_array[str[i]-'a']==0)
            hash_array[str[i]-'a']++;
        else 
            hash_array[str[i]-'a']--;
    }
    int sum = 0;
    for(int i=0;i<26;i++)
        sum+=hash_array[i];
    cout<<sum;
    
}