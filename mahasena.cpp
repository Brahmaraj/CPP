#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,even=0,odd=0;
        cin>>n;
        int *array = new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        for(int i=0;i<n;i++){
            if(array[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            cout<<"Ready";
        else    
            cout<<"Not Ready";
    
    }

    return 0;
}