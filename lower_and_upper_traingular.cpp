#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int **matrix = new int*[m];
    int **upper = new int*[m];
    int **lower = new int*[m];

    for(int i=0;i<m;i++){
        matrix[i] = new int[n];
        upper[i] = new int[n];
        lower[i] = new int[n];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            lower[i][j] = matrix[i][j];
            upper[i][j] = matrix[i][j];
            if(i<j)
                lower[i][j] = 0;
            else if(i>j)
                upper[i][j] = 0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<lower[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<upper[i][j]<<" ";
        }
        cout<<endl;
    }

}