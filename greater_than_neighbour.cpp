#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int count = 0;
        cin>>n;
        int *array = new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        if(array[0]>array[1]){
            count++;
            cout<<0<<" ";
            }
        for(int i=1;i<n-1;i++){
            if(array[i]>array[i-1] && array[i]>array[i+1]){
                count++;
                cout<<i<<" ";
                }
        }
        if((array[n-1]>array[n-2]) && ((n-1)!=0)){
            count++;
            cout<<n-1<<" ";
            }
        if(count==0)
            cout<<-1;
        cout<<"\n";
    }
    return 0;
}