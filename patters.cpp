#include<iostream>
using namespace std;



int main(){
    int n=5; 
    int num;
    for(int row=1;row<2*n;row++){
        for(int col=1;col<2*n;col++){
            int index = (n - min(min(row,col),min(2*n-row,2*n-col)))+1;
            cout<<index<<" ";
        }
        cout<<endl;
    }


    // for(int i=1;i<=2*n-1;i++){ //prints diamond shape with * maipulate spaces to make right and left faced pyramid
    //     space = i<=n?n-i:i-n;
    //     star = n-space;
    //     for(int j=1;j<=space;j++)
    //         cout<<" ";
    //     for(int k=1;k<=star;k++)
    //         cout<<"* ";
    //     cout<<endl;
    // }

    // for(int i=1;i<=2*n-1;i++){ //prints * in increasing and decreasing order right tilted pyramid sort of
    //     col = i<=n? i : (2*n-i);
    //     for(int j=1;j<=col;j++){
    //             cout<<"* ";
    //         }
    //     cout<<endl;
    //     }
    // for(int i=1;i<=n;i++){ //prints 1 in 1st row and 1 to n in n rows till n
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){ //prints n* in first line and then reducing by 1* till first row
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}