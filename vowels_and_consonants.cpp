#include<iostream>
#include<string>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll count_v = 0,count_c=0;
        string str;
        cin>>str;
        string::iterator sit;
        for(sit=str.begin();sit!=str.end();sit++){
            if(*sit== 'A' || *sit=='E' || *sit=='I'|| *sit=='O'|| *sit=='U')
                count_v++;
            else
                count_c++;
        }
        cout<<count_v<<" "<<count_c<<endl;
    }
    return 0;
}