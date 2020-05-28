#include<iostream>
#include<cmath>
int isprime(long long int);



int main()
{
  long long int n;
  int count=0;
  scanf("%lld",&n);
  printf("%lld\n",n);
  //Sum solving
  count=0;
  for(long long int i=2;i<=n;i++)
  {
    if(n%i==0)
    {
      if((isprime(i))==1)
      count++;

      while(n%i==0)
      {
      n=n/i;
        printf("  i=%lld   nvalue=%lld   count=%d\n",i,n,count);
    }
      //printf("  i=%d   nvalue=%lld   count=%d\n",i,n,count);
    }
    //printf("  i=%d   nvalue=%lld   count=%d\n",i,n,count);
  }


  //printing part
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
