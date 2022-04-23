#include<iostream>
#include<bitset>
using namespace std;
int main(){
    //Realtional Operators 6 types
            // 1.  "<"
            // 2.  ">"
            // 3.  "<="
            // 4.  ">="
            // 5.  "=="
            // 6.  "!="
    //returns boolean value
    // int x,y;
    // cin>>x>>y;
    // cout<<(x>y)<<"\n";
    // cout<<(x<y)<<"\n";
    // cout<<(x>=y)<<"\n";
    // cout<<boolalpha; //true or false
    // cout<<(x<=y)<<"\n";
    // cout<<(x==y)<<"\n";
    // cout<<noboolalpha; // 1 or 0
    // cout<<(x!=y)<<"\n";

    //Bitwise Operators
//     cout<<-1<<"\n";  //bitwise not ~
//     cout<<sizeof(3)<<"\n";
//     cout<<(bitset<32>(3))<<"\n";
//     cout<<~-19;

    int x,y=16,z=9;
    x = (++y,++z);
    //x = ++y,++z;
    cout<<x;
}