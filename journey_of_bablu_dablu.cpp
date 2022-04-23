#include<iostream>
using namespace std;
  
  int main()
  {
    int n,berth;
    cin>>n;
    while(n--){
        cin>>berth;
        if(berth%8==0){
                cout<<(berth-1)<<"SL";
        }
        else if(berth%8==7){
                cout<<(berth+1)<<"SU";
        }
        else if(berth%8==1){
                cout<<(berth+3)<<"LB";
        }
        else if(berth%8==2){
                cout<<(berth+3)<<"MB";
        }
        else if(berth%8==3){
                cout<<(berth+3)<<"UB";
        }
        else if(berth%8==4){
                cout<<(berth-3)<<"LB";
        }
        else if(berth%8==5){
                cout<<(berth-3)<<"MB";
        }
        else if(berth%8==6){
                cout<<(berth-3)<<"UB";
        }
        cout<<"\n";
    }
    return 0;
  }