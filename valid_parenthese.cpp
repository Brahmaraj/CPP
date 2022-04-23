#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int hash_arr[126];
    for(int i=0;i<126;i++)
        hash_arr[i] = 0;
    for(int i=0;i<s.size();i++){
            if(hash_arr<0)
                return 0;
            else if(s[i]==')')
                hash_arr[40]--;
            else if(s[i]=='}')
                hash_arr[123]--;
            else if(s[i]==']')
                hash_arr[91]--;
            else
                hash_arr[s[i]]++;
    }
    int flag = 1;
    for(int i=0;i<126;i++){
        if(hash_arr[i]!=0){
            flag = 0;
            break;
        }
    }
    return flag;
}