#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(2);
    s.insert(22);
    s.insert(15);
    s.insert(12);
    s.insert(29);
    s.insert(33);
    s.insert(34);
    set<int> ::iterator itr;
    for(itr = s.begin(); itr!=s.end();itr++)
        cout<<*itr<<" ";
    cout<<endl;
    cout<<*s.find(90)<<"\n";
    cout<<*s.end();
}