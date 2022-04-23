#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n,quantity,price;
    float tot;
    cin>>n;
    while(n--){
        cin>>quantity>>price;
        cout<<std::fixed;
        cout<<setprecision(1);
        if(quantity>100)
            tot = float(price*quantity*0.8);
        else{
            tot = float(price*quantity);
        }
        cout<<tot<<"\n";
    }
}