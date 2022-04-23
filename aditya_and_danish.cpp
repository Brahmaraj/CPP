#include<iostream>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll count_a = 0,count_d = 0;
        cin>>n;
        char *chararray = new char[n];
        cin>>chararray;
        for(ll i=0;i<n;i++){
            if(chararray[i]=='A')
                count_a++;
            else
                count_d++;
        }
        if(count_a==count_d)
            cout<<"AdiDan"<<endl;
        else if(count_a>count_d)
            cout<<"Aditya"<<endl;
        else    
            cout<<"Danish"<<endl;
    }
    return 0;
}