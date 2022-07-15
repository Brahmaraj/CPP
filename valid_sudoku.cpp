#include<iostream>
using namespace std;

bool validSudoku(char [9][9], int, int);

int main(){
    char board[9][9];
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            cin>>board[i][j];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++)
            if(board[i][j]!='.')
                if(!validSudoku(board, i, j)){
                    cout<<"false";
                    break;
                }
        cout<<"true";
    }
    return 0;
}

bool validSudoku(char board[9][9], int i, int j){
    int sub_arr[9] = {0};
    int row_arr[9] = {0};
    int col_arr[9] = {0};
    for(int m=(i/3)*3;m<((i/3+1)*3);m++)
        for(int n=(j/3)*3;j<((j/3+1)*3);n++)
            if(board[m][n]!='.')
                sub_arr[board[m][n]]++;
    for(int k=0;k<9;k++){
        if(board[i][k]!='.')
            row_arr[board[i][k]]++;
        if(board[k][j]!='.')
            col_arr[board[k][j]]++;
    }
    for(int k=0;k<9;k++){
        if(sub_arr[k]>1)
            return false;
        if(row_arr[k]>1)
            return false;    
        if(col_arr[k]>1)
            return false;
    }
    return true;
};