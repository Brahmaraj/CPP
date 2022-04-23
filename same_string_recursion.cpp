#include<iostream>
#include<string>
using namespace std;

void sameString(string, int, int, int);

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        sameString(str,0,str.length(),str.length());
    }
    return 0;
}

void sameString(string str, int i, int n, int length){
    if(i==length/2){
        cout<<"YES";
        cout<<endl;
        return;
    }
    if(str[i]==str[n-1]){
        sameString(str, i+1,n-1,length);
        }
    if(str[i]!=str[n-1]){
        cout<<"NO";
        cout<<endl;
        return;
    }    

}