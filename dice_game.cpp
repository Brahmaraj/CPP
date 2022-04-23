#include <iostream>
using namespace std;

int main()
{
  int n,count_pragya,count_tina;
  cin>>n;
  while(n--){
    int pragya=0,tina=0;
    cin>>pragya>>tina;
    if(pragya>tina)
      count_pragya++;
    else if(tina>pragya)
      count_tina++;
  }
  if(count_pragya>count_tina)
    cout<<"Pragya";
  else if(count_pragya<count_tina)
    cout<<"Tina";
  else 
    cout<<"Draw";
  
  return 0;
}