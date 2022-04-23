#include<iostream>
#include<cmath>
using namespace std;

// int main(){
    // int n;
    // cin>>n;
    // int *array = new int[n];
    // int water = 0;

    // for(int i=0;i<n;i++){
    //     cin>>array[i];
    // }

    // for(int i=1;i<n-1;i++){ //not considering first and last building becase 0 units of water will be stored above them as they don't have boundaries.
        
    //     int l_max = array[i];  //setting max as itself because if it's max then lmax==rmax==height so it'll be water stored above that building will be 0. 
    //     for(int j=i;j>=0;j--){
    //         if(array[j]>l_max)
    //             l_max = array[j];
    //     }

    //     int r_max = array[i];
    //     for(int j=i;j<n;j++){
    //         if(array[j]>r_max)
    //             r_max = array[j];
    //     }

    //     water = water + (min(l_max,r_max) - array[i]);
    // }
    // cout<<water;
    /****************************************************************************************************** */

//     int n,water=0;
//     cin>>n;
//     int *array = new int[n];
//     int *left = new int[n];
//     int *right = new int[n];

//     for(int i=0;i<n;i++)
//         cin>>array[i];

//     left[0]=array[0];
//     for(int i=1;i<n;i++){
//         if(array[i]>left[i-1])
//             left[i]=array[i];
//         else 
//             left[i]=left[i-1];
//     }

//     right[n-1]=array[n-1];
//     for(int i=n-2;i>=0;i--){
//         if(array[i]>right[i+1])
//             right[i]=array[i];
//         else    
//             right[i] = right[i+1];
//     }

//     for(int i=0;i<n;i++){
//         water += min(left[i],right[i]) - array[i];
//     }
//     cout<<water;

//     return 0;
// }

//practice 1
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,r_max=0,l_max=0,water = 0;
//         cin>>n;
//         int *array = new int[n];
//         for(int i=0;i<n;i++){
//             cin>>array[i];
//         }
//         for(int i=1;i<n-1;i++){
//             l_max = array[i];
//             for(int j=0;j<i;j++){
//                 if(array[j]>l_max)
//                     l_max = array[j];
//             }
//             r_max = array[i];
//             for(int j=i+1;j<n;j++){
//                 if(array[j]>r_max)
//                     r_max = array[j];
//             }
//             water = water + (std::min(r_max,l_max) - array[i]);
//             // cout<<water<<endl;
//         }
//         cout<<water<<endl;
//     }
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,water = 0;
        cin>>n;
        int *array = new int[n];
        int *l_max = new int[n];
        int *r_max = new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        l_max[0] = array[0];
        r_max[n-1] = array[n-1];
        for(int i=1,j=n-2;i<n;i++,j--){
            if(l_max[i-1]<array[i])
                l_max[i] = array[i];
            else
                l_max[i] = l_max[i-1];
            if(r_max[j+1]<array[j])
                r_max[j] = array[j];
            else
                r_max[j] = r_max[j+1];
        }
        for(int i=0;i<n;i++){
            water += std::min(l_max[i],r_max[i])-array[i];
        }
        cout<<water<<endl;
    }

    return 0;
}