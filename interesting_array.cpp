#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin>>n;
        int *array = new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        cin>>k;
        bool flag = true;
        int small=0,large=n-1;
        while(sum!=k && small<large){
            sum = array[small] + array[large];
            if(sum<k)
                small++;
            else if(sum>k)
                large--;
            else{
                cout<<small<<" "<<large<<"\n";
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<"no answer\n";
    }

    return 0;
}