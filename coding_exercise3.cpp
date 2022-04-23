#include<iostream>
using namespace std;

int main(){
    int x,y,choice;
    char again;
    do{
        cout<<"1.Enter two Numbers"<<endl;
        cin>>x>>y;
        cout<<"2.Add them: \n3.Subtract them: "<<endl;
        cin>>choice;
        switch(choice){
            case 2: cout<<x+y<<endl;
                    break;
            case 3: cout<<x-y<<endl;
                    break;
            default : cout<<"not a valid option"<<endl;
        }
        cout<<"Want the menu again ? press(y/n)";
        cin>>again;
    }while(again=='y' || again=='Y' );

    return 0;

}