#include<iostream>
using namespace std;

void areaofSquare(int);
void areaofCircle();
int areaOfRectangle(int, int);
int main(){
    int n;
    
    
    do{
        cout<<"1.Calculate area of Square: \n2.Calculate area of Circle: \n3.Calculate area of Rectangle: \n";
        cin>>n;
        
        switch (n)
    {
    case 1:
        int side;
        cout<<"Enter dimensions";
        cin>>side;
        areaofSquare(side);
        break;

    case 2:
        areaofCircle();
        break;

    case 3:
        int length, breadth;
        cin>>length>>breadth;
        int area;
        area = areaOfRectangle(length,breadth);
        cout<<area<<"\n";

    default:
        break;
    }
    }
    while(n<=3);

    return 0;
};

void areaofSquare(int s){
    cout<<s*s<<"\n";
};

void areaofCircle(){
    int r;
    cin>>r;
    cout<<3.14*r<<"\n";
};

int areaOfRectangle(int l, int b){
    return (2*l*b);
};
