#include<iostream>
#include<cmath>
int isprime(long long int);
using namespace std;


int main()
{
  long long int n;
  int t,count=0,k;
  scanf("%lld",&n);
  printf("%lld\n",n);

    k=0;
    for(long long int i=1;i<=sqrt(n);i++)
    {
      k=isprime(i);
        if(k==1)
        {
          //printf("%lld\n",n);
          if(n%i==0)
          count++;
          while(n%i==0)
          {
            n=n/i;
            printf("%lld\n",n);
          }

        }

        printf(" i= %d    count = %d   nvalue=%lld\n",i,count,n);
    }
    printf("%d",count);
    return 0;
}

int isprime(long long int n)
{

  if(n==2)
   return 1;
   if(n%2==0||n==1)
   return 0;

  for(long long int i=3;i<=sqrt(n);i=i+2)
  {
    if(n%i==0)
    {
      return 0;

    }
  }
  return 1;
}
