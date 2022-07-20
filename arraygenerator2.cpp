#include<iostream>
#include<fstream>
using namespace std;

int findMinIndex(int [], int);

int main(){
    ofstream out;
    ifstream in;
    out.open("D:/C C++/C++/wrongOutput.txt"); //first we wrote the output to actualoutput file and now intentionally we are writing wrong co
    in.open("D:/C C++/C++/testInput.txt");
    int t;
    in>>t; //as per input format that we created a file in previous code same format has to be followed will take the input from the first line and that many number of test cases will be performed
    while(t--){
        int n;
        in>>n;
        int *arr = (int *)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
            in>>arr[i];
        int result = findMinIndex(arr, n);
        out<<result<<"\n";
    }
}

int findMinIndex(int arr[], int n){
    int min = arr[0];
    int index = 0;
    for(int i=1;i<n;i++)
        if(min>arr[i]){
            min = arr[i];
            index = i;
        }
    return min;
}