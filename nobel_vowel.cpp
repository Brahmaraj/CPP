#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string checknobel;
        cin>>checknobel;
        string::iterator sit;
        bool flag = true;
        int i=0;
        for(int i=0;i<checknobel.size();i++){
            
            if( checknobel[i]!='a' && checknobel[i]!='e' && checknobel[i]!='i' && checknobel[i]!='o' && checknobel[i]!='u' && checknobel[i]!='n' ){
                if(checknobel[i+1]!='a' && checknobel[i+1]!='e' && checknobel[i+1]!='i' && checknobel[i+1]!='o' && checknobel[i+1]!='u'){
                    flag = false;
                    cout<<"After Change: "<<flag<<" \n";
                    break;
                    }   
            }
            cout<<flag<<" \n";
        }
        if(flag && (checknobel[checknobel.size()-1]=='a' || checknobel[checknobel.size()-1]=='e' || checknobel[checknobel.size()-1]=='i' || checknobel[checknobel.size()-1]=='o' || checknobel[checknobel.size()-1]=='u' || checknobel[checknobel.size()-1]=='n'))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }


    return 0;
}