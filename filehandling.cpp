#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    ifstream in;
    in.open("D:/C C++/C++/test.txt");
    int t = 2;
    out.open("D:/C C++/C++/test1.txt");
    while(t--){
        int n;
        in>>n;
        out<<n;
    }


    return 0;
}