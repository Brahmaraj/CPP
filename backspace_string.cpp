#include<iostream>
#include<string.h>
using namespace std;

bool backspaceCompare(string s, string t) {
        string s1,t1;
        s1 = "";
        t1 = "";
        int count = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#')
                count--;
            else
                s1[count++] += s[i];
            cout<<s1<<endl;
        }
        count = 0;
        for(int i=0;i<t.length();i++){
            if(t[i]=='#')
                count--;
            else
                t1[count++] += t[i];
            cout<<t1<<endl;
        }
        cout<<"test"<<endl;
        cout<<s1<<" "<<t1;
        if(s1==t1)
            return true;
        return false;
    }

int main(){
    string s = "a#b";
    string t = "t";
    cout<<backspaceCompare(s,t);
    return 0;
}