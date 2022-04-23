#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int val;
    cin>>val;
    int left = 0;
    for(int i=0;i<n;i++){
        if(array[i]!=val){
            array[left++] = array[i];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}