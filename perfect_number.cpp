#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int sum=0;
        cin>>n;
        for(int i=1;i<=n/2;i++){
            if(n%i==0)
                sum+=i;
        }
        if(sum==n)
            cout<<"true\n";
        else    
            cout<<"false\n";
    }
    return 0;
}