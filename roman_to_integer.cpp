#include<iostream>
#include<string>
using namespace std;

int main(){
    int hash_table[26];
    for(int i=0;i<26;i++){
        hash_table[i] = 0;
    }
    hash_table['I' - 65] = 1;
    hash_table['V' - 65] = 5;
    hash_table['X' - 65] = 10;
    hash_table['L' - 65] = 50;
    hash_table['C' - 65] = 100;
    hash_table['D' - 65] = 500;
    hash_table['M' - 65] = 1000;
    string s;
    cin>>s;
    int sum = 0;
    for(int i=0;i<s.length();i++){
        if(i==0){
            sum += hash_table[((int)s[i])- 65];
        }
        else if(hash_table[(int)s[i] - 65]>hash_table[(int)s[i-1] - 65]){
            sum = sum + hash_table[s[i] - 65] - 2*hash_table[s[i-1] - 65];
        }
        else
        sum += hash_table[s[i] - 65];
    }
    cout<<sum;
    return 0;
}