#include<iostream>

using namespace std;


class Bird
{
public:
  void wings(){
    cout<<"\nwings";
  }
  void beak(){
    cout<<"\nBeak";
  }
};


int main()                                                            
{
  Bird sparrow;
  sparrow.wings();
  sparrow.beak();
  return 0;
}
