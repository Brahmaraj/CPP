#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in1;
    ifstream in2;
    in1.open("D:/C C++/C++/actualOutput.txt");
    in2.open("D:/C C++/C++/wrongOutput.txt");
    int num1,num2;
    while(in1>>num1 && in2>>num2){
        if(num1!=num2)
            cout<<"Wrong Ans"<<" \n";
        else
            cout<<"Right Ans"<<" \n";
    }
}