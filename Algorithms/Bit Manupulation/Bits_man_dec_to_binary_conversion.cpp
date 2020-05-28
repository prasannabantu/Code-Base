#include<iostream>
void dec_to_bin(int);
using namespace std;

int main()
{
  int n,q;
  scanf("%d",&n);
 dec_to_bin(n);
 return 0;
}


void dec_to_bin(int n)
{
  if(n!=0)
  {
    dec_to_bin(n/2);
    printf("%d",n%2);
  }

return;
}
