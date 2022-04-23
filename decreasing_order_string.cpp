#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string input;
        cin>>input;
        string output = "";
        int freq[26] = { 0 };
        for(int j=0;j<input.size();j++){
                freq[input[j]-'a']++ ;
        }
        for(int i=25;i>=0;i--){
            for(int j=0;j<freq[i];j++){
                output.push_back(char(i+'a'));
            }
        }
        cout<<output<<endl;
    }
}