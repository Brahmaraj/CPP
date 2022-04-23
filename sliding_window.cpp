#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin>>n>>k;
        int *array = new int[n];
        if(k>n){
            throw std::invalid_argument("k greater than n");
            cout<<"invalid";
            }

        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        for(int i=0;i<k;i++){
            sum+=array[i];
        }
        int max = sum;
        for(int i=k;i<n;i++){
            sum+=array[i] - array[i-k];
            if(sum>max)
                max = sum;
        }
        cout<<max<<endl;
    }
}