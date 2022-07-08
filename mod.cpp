#include<iostream>
using namespace std;

int solve(int, int, int);

int main(){
    int a,b,m;
    cin>>a>>b>>m;
    if(a==0 || b==0 || m==0)
        cout<<"wrong input";
    else {
        int result = solve(a, b, m);
        cout<<result<<"\n";
    }
    return 0;
}

int solve(int a, int b, int m){
    if(b==1)
        return a%m;
    if(b%2!=0){
        return (a*(solve((a*a)%m,(b-1)/2,m)))%11;
    }
    else
     return solve((a*a)%m,b/2,m);
}