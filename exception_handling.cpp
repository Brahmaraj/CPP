#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    try
    {
        if(b==0)
            throw b;
        int y = a/b;
    }
    catch(int b)
    {
        cout<<"zero is not allowed";
    }
    return 0;
}