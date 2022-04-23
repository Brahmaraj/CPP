#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int n;
  long long a,b,c;
  cin>>n;
  while(n--){
    a=b=c=0;
    cin>>a>>b>>c;
    if((b%c)==a)
      cout<<"YES";
    else  
      cout<<"NO";
    cout<<"\n";
  }
  return 0;
}