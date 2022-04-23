// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=(5-i);j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<k;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

#include <iostream>  
using namespace std;  
int main()
{   
     int sum = 0;
     for (int i = 0, j = 0; i < 5 & j < 5; ++i, j = i + 1)
         sum += i;
      cout<< sum;
}