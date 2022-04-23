//logical AND if gets first value as false then it doesn't check for second value (doesn't evaluate if expression)
//logical OR if gets first value as true doesn't check for second value (doesn't evaluate if expression)

#include<iostream>
using namespace std;

int main(){
    int x = 2;
    int y = 3;
    if(x>1 || ++y>3)
        cout<<x<<"\n"<<y;
    if(x<1 && ++y>3)
        cout<<x<<"\n"<<y;
    return 0;
}