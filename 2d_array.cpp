#include<iostream>
using namespace std;

int main(){
    int row,col,n;
    cin>>row>>col>>n;
    int **array = new int*[row];
    for(int j=0;j<row;j++){
        array[j] = new int[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}