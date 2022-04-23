#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string cards_in_hand[5];
        string card_on_table;
        cin>>card_on_table;
        for(int i=0;i<5;i++){
            cin>>cards_in_hand[i];
        }
        bool flag = false;
        for(int i=0;i<5;i++){
            if(card_on_table[0]==cards_in_hand[i][0] || card_on_table[0]==cards_in_hand[i][1] || card_on_table[1]==cards_in_hand[i][0] || card_on_table[1]==cards_in_hand[i][1]){
                flag = true;
                break;
                }
        }
        if(flag)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}