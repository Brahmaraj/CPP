#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

int main(){
    ofstream out;
    out.open("D:/C C++/C++/testInput.txt");
    int t = 10;
    out<<t<<"\n";
    srand(time(0));
    while(t--){
        int n;
        n = rand()%10+1;
        out<<n<<"\n";
        for(int i=0;i<n;i++){
            out<<rand()%11<<" ";
        }
        out<<"\n";
    }
    return 0;
}