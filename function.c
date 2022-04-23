#include<stdio.h>

void printFunc(int);
enum first
{
    red,
    blue,
    green = 5
};
int main(){
    printFunc(5);
    enum first color;  
    color = blue;
    printf("%d\n",color);
    return 0;
}

void printFunc(int i){
    printf("%d\n",i);
}