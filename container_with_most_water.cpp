#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, curr_sum = 0, max = 0;
    cin>>n;
    int start,end;
    int *height = new int[n];
    start = 0;
    end = n-1;
    for(int i=0;i<n;i++)
        cin>>height[i];
    while(start<end){
        curr_sum = min(height[start],height[end]) * (end-start);
        if(height[start]>height[end])
            end--;
        else
            start++;
        if(curr_sum>max)
            max = curr_sum;
    }
    cout<<max;
}