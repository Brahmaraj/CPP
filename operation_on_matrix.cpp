#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int **matrix1 = new int*[m];
    int **matrix2 = new int*[m];
    int **result1 = new int*[m];
    int **result2 = new int*[m];
    for(int i=0;i<m;i++){
        matrix1[i] = new int[n];
        matrix2[i] = new int[n];
        result1[i] = new int[n];
        result2[i] = new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix1[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result1[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int result = 0;
            for(int k=0;k<n;k++){
                result += matrix1[i][k]*matrix2[k][j];
            }
            result2[i][j] = result;
        }
    }    

    for(int i=0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<result1[i][j]<<" ";
        }
        cout<<"\n";
    }    

    for(int i=0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<result2[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

