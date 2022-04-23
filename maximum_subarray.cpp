#include<iostream>
#define MAX_SIZE 100000
using namespace std;

//Brute Force Approach
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int sub_array[MAX_SIZE];
//         int n;
//         int count=0;
//         cin>>n;
//         int *array = new int[n];
//         for(int i=0;i<n;i++){
//             cin>>array[i];
//         }
//         int max=array[0],sub_max;
//         for(int i=0;i<n;i++){
            
//             for(int j=i;j<n;j++){
//                 sub_max=0;
//                 for(int k=i;k<=j;k++){
//                     sub_max += array[k];
//                 }
//                 sub_array[count++] = sub_max;
//                 if(sub_max>max)
//                 max = sub_max;
//             }
            
//         }
//         max = sub_array[0];
//         for(int i=0;i<count;i++){
//             if(max<sub_array[i])
//                 max = sub_array[i];
//         }
//         cout<<"\n"<<max<<"\n";
//     }
//     return 0;
// }



//Optimized Approach Kadane's Algorithm

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_sum=0,curr_sum=0;
        int *array = new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        max_sum = array[0];
        for(int i=0;i<n;i++){
            curr_sum += array[i];
            if(max_sum<curr_sum)
                max_sum = curr_sum;
            if(curr_sum<0)
                curr_sum = 0;
        }
        cout<<max_sum<<"\n";
    }
}