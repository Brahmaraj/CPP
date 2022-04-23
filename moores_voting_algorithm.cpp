#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int *array = new int[n];
//     int votes = 0, candidate = -1;
//     int *new_array = new int[n/2+1];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
    // }
    // for(int i=0;i<n;i++){
    //     int count = 1;
    //     for(int j=i+1;j<n;j++){
    //         if(array[i] == array[j] && array[i] != -1){
    //             array[j] = -1;
    //             count++;
    //         }
    //     }
    //     if(k<(n/2+1))
    //         new_array[k++] = count;
    // }
    // for(int i=0;i<n/2+1;i++){
    //     if(new_array[i]>n/2)
    //         cout<<"\nMajority Element: "<<array[i];
    // }

    /* Moore's Voting Algorithm */
    // candidate = array[0],votes = 1;
//     for (int i = 0; i < n; i++) {
//         if (votes == 0) {
//             candidate = array[i];
//             votes = 1;
//         }
//         else {
//             if (array[i] == candidate)
//                 votes++;
//             else
//                 votes--;
//         }
//         // cout<<candidate<<" "<<votes<<endl;
//     }
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(candidate==array[i])
//             count++;
//     }
//     if(count>n/2)
//         cout<<"Majority Element: "<<candidate<<endl;
//     else    
//         cout<<"No Majority Element: "<<endl;

//     return 0;
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *array = new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        int votes = 0,candidate = -1;
        for(int i=0;i<n;i++){
            if(votes>n/2)
                break;
            if(votes==0){
                candidate = array[i];
                votes = 1;
            }
            else 
                if(array[i]==candidate)
                    votes++;
                else 
                    votes--;

            cout<<votes<<"\n";
        }
        if(votes>n/2)
            cout<<"Candidate is: "<<candidate<<endl;
        else
            cout<<"No Candidate"<<endl;
    }
}