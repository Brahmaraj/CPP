#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    int hash_array[121];
    for(int i=0;i<n;i++){
        cin>>array[i];
    } 
    for(int i=0;i<121;i++){
        hash_array[i] = 0;
    }
    for(int i=0;i<n;i++){
            hash_array[array[i]]++;
        }   
    int sum = 0;
    for(int i=1;i<=120;i++){
        for(int j=1;j<=120;j++){
            if(j<=i/2+7 || j>i);
            else{
                if(i==j)
                    sum += hash_array[i]*(hash_array[i]-1);
                else 
                    sum += hash_array[i]*hash_array[j];
            }
        }
    }
    cout<<sum<<endl;   
    return 0;
}