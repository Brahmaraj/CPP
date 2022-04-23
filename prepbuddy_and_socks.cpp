
//PrepBuddy is getting late for college. 
//She is looking for a matching pair of socks from a box full of socks. In the worst-case scenario, 
//how many socks should PrepBuddy remove from her drawer until she finds a matching pair.

#include <iostream>
using namespace std;
  
  int main()
  {
    int n,pairs;
    cin>>n;
    while(n--){
      cin>>pairs;
      cout<<(pairs+1)<<"\n"; //pairs + 1 because for worst case she'll get each socks of different pairs
                             //and finally after 1 different socks from each pair in next cycle it'll 
                            // match the existing pair
    }
    return 0;
  }