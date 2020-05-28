#include<iostream>
 #include<cmath>
using namespace std;

int main()
{
  int n;
  cin>>n;
  cout<<endl;
  int count=0;
  for(int i=0;i<5;i++)
  {
      if((n&(n-1))==0)
      {
          n=n/2; printf(" %d ",n);
        }
      else
      {
         n=(int)pow(2,floor((log(n))/log(2)));
          printf(" ***%d \n",n);
       }
       count++;

  }
}
