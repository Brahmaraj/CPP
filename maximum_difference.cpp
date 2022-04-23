#include<iostream>
#define ll long long
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,diff1,diff2,maxx=-1,minn=-1;
        cin>>n;
        ll *array = new ll[n];
        ll *array1 = new ll[n];
        ll *array2 = new ll[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        for(int i=0;i<n;i++){
            array1[i] = array[i]+i;
            array2[i] = array[i]-i;
        }
        maxx = array1[0],minn = array1[0];
        for(int i=0;i<n;i++){
            if(array1[i]>maxx)
                maxx = array1[i];
            if(array1[i]<minn)
                minn = array1[i];
        }
        diff1 = maxx - minn;
        maxx = array2[0],minn = array2[0];
        for(int i=0;i<n;i++){
            if(array2[i]>maxx)
                maxx = array1[i];
            if(array2[i]<minn)
                minn = array1[i];
        }
        diff2 = maxx - minn;
        cout<<std::max(diff1,diff2)<<endl;
    }
}