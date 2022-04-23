#include<iostream>
using namespace std;

void recursionBinarayCombination(string, int, int);

int main(){
    int t;
    cin>>t;
    int array[50];
    while(t--)
    {
        int n;
        cin>>n;
        int i=50,count0 = 0,count1=0;
        while(n>0){
            array[--i] = n%2;
            n=n/2;
        }
        for(int j=49;j>=i;j--){
            if(array[j]==0)
                count0++;
            else
                count1++;
    }
    string s = "";
    recursionBinarayCombination(s,count0,count1);
    }
    return 0;
}

void recursionBinarayCombination(string temp, int zero, int one){
    if(zero==0 && one==0){
        cout<<temp<<" ";
        return;
        }
    if(zero>0)
        recursionBinarayCombination(temp+"0", zero-1,one);
    if(one>0)
        recursionBinarayCombination(temp+'1',zero,one-1);
}