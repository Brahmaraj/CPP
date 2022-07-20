#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

string solve(int A[], int n) {
    if(n<=1)
        return to_string(A[0]);
    float ans = (A[0]/2)+(A[n-1]/2);
    cout<<endl<<ans<<endl;
    string s = "";
    for(int i=1;i<n;i++){
        cout<<ans<<endl;
        if(A[i]>A[i-1])
            ans += (A[i] - (A[i]-A[i-1])/2);
        else if(A[i]<A[i-1])
            ans += (A[i-1] - (A[i-1]-A[i])/2);
        else
            ans += A[i];
    }
    s = to_string((int)ans);
    return s;
}


int main(){
    int A[] = {1,2,1,2,1};
    string s = solve(A, 5);
    cout<<s;
}