#include<iostream>
using namespace std;

struct student
{
char* name;
};
struct student s;
struct student fun(void)
{
  s.name = "newton";
  cout << s.name<<" ";
  s.name = "alan";
  return s;
}

int main()
{
  struct student m = fun();
  cout << m.name<<" ";
  m.name = "turing";
  cout << s.name;
}