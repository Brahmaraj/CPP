#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i=0;i<n;i++){
      cin>>array[i];
    }
    int reach=array[0];
    for(int i=0;i<n;i++){
        if(reach>=n-1){
            cout<<"Yes";
            break;
        }
        else if(array[i]==0){
            int j=i;
            while(array[j]==0)
                i--;

        }
        reach += array[reach];

    }
  
  return 0;
}