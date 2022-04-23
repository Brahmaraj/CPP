#include<iostream>
#define MAX_SIZE 100000
using namespace std;

int main(){
    int visitCount[MAX_SIZE];
    int prevIndex[MAX_SIZE];
    int commonDifference[MAX_SIZE];
    int n=0;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<MAX_SIZE;i++){
        visitCount[i] = 0;
        commonDifference[i] = 0;
    }
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0; i<n;i++){
        if(visitCount[array[i]]==-2);
        else {
            visitCount[array[i]]++;
        };
        if(visitCount[array[i]]==2){
            commonDifference[array[i]] = i - prevIndex[array[i]];
        }
        if(visitCount[array[i]]>2){
            if(commonDifference[array[i]] != (i-prevIndex[array[i]]))
                visitCount[array[i]] = -2;
        }
        prevIndex[array[i]] = i;
    }

    int count = 0;
    
    for(int i=0;i<MAX_SIZE;i++){
        if(visitCount[i]>0)
            count++;
    }

    cout<<count<<"\n";

    for(int i =0;i<MAX_SIZE;i++){
        if(visitCount[i]>0){
            cout<<i<<" "<<commonDifference[i]<<endl;
        }
    }

    return 0;
}