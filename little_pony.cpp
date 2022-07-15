#include<iostream>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    int *A = (int *)malloc(n*sizeof(int));
    int *B = (int *)malloc(m*sizeof(int));
    int *sum = (int *)malloc(n*sizeof(int));
    int *result = (int *)malloc(m*sizeof(int));
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<m;i++)
        cin>>B[i];
    sum = A;
    for(int i=1;i<n;i++)
        sum[i] = sum[i]+sum[i-1];
    int ans = 0;
    for(int i=0;i<m;i++){
        if(B[i]>sum[n-1])
            ans = n; 
        else if(B[i]<sum[0])
            ans = 0;
        else {
            int l = 0;
            int h = n-1;
            while(l<h){
                int mid = l + (h-1)/2;
                if(sum[mid]==B[i]) {
                    ans = mid+1;
                    break;
                }
                else if(sum[mid]>B[i] && sum[mid-1]<B[i]){
                    ans = mid;
                    break;
                }
                else if(sum[mid]<B[i] && sum[mid+1]>B[i]) {
                    ans = mid+1;
                    break;
                }
                else if(sum[mid]>B[i])
                    h = mid-1;
                else
                    l = mid+1;
            }
        }
        cout<<endl;
        cout<<ans<<"\n";
        result[i] = ans;
    }
    for(int i=0;i<n;i++)
        cout<<sum[i]<<" ";
    for(int i=0;i<m;i++)
        cout<<result[i]<<" ";
}