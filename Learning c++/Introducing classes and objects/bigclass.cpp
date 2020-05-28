#include<iostream>

using namespace std;

class Goal
{
public:
  void display(string s)
  {
    cout<<"The essential thing is "<<s;
  }
};

int main()
{
  Goal du;
  string rule;
  cout<<"Enter the important thing:";
  getline(cin,rule);
  du.display(rule);
  return 0;

}
