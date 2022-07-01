#include<iostream>
using namespace std;

void editPointer(int **ptr){
    int value = 20;
    *ptr = &value;
}

int main(){
    int *ptr = (int *)malloc(sizeof(int));
    int var = 5;
    ptr = &var;
    editPointer(&ptr);
    cout<<*ptr;
}