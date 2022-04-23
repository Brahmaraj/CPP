#include<iostream>
using namespace std;

void recursiveFun1(int);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        recursiveFun1(n);
        cout<<"\n";
    }

    return 0;
}

void recursiveFun1(int n){
    cout<<n<<" ";
    if(n<=0)
        return;
    recursiveFun1(n-5);
    cout<<n<<" ";
}