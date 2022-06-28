#include<iostream>
#include<math.h>
using namespace std;

int recursion(int* ,int ,int);

int main(){
    int n;
    cin>>n;
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum = 0;
    for(int i=0;i<n;i++)
        sum+= arr[i];
    int bestScore = recursion(arr, 0, n-1);
    string result;
    if(bestScore>=sum-bestScore)
        result = "true";
    else
        result = "false";
    cout<<result<<endl;
}

int recursion(int *arr, int i, int j){
    if(i>j)
        return 0;
    int choice1 = arr[i] + min(recursion(arr, i+2,j), recursion(arr, i+1 ,j-1));
    int choice2 = arr[j] + min(recursion(arr, i,j-2), recursion(arr, i+1 ,j-1));
    return max(choice1, choice2);
}