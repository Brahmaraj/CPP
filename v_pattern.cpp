#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    int n=5;
    for(int i=1;i<=n;i++){
        int space = 2*(n-i);
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int l=i;l>=1;l--){
            printf("%d",l);
        }
        printf("\n");
    }
}