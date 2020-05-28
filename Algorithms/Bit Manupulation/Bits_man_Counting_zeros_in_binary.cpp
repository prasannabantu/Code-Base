#include<iostream>


using namespace std;


int main()
{
      int n,count=0,t;
      cin>>n;
      t=n;
      while(n)
      {
        if((n&1)==0)
        count++;
        n=n>>1;
      }
      printf("The number of zeros when the %d is vonverted to binray:%d",t,count);
  }
