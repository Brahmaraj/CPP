// PrepBuddy has an analog clock which consists of two hands one for hour and another for minute. 
//She wants to calculate the shorter angle formed between hour and minute hand at any given time.

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    float n, hr, min, angle;
    cin>>hr>>min;
    angle = ((hr+(min/60))*30) - (min*6);
    cout<<abs(angle)<<"\n"<<((hr+min/60)*30)<<"\n"<<(min*6);
    return 0;
}