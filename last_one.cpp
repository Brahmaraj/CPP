#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *array = new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        int index = -1;
        for(int j=0;j<n;j++){
            if(array[j]==1)
                index = j;
        }
        cout<<index<<"\n";
        delete(array);
    }
    
    return 0;
}