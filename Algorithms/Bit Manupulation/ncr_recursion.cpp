#include<iostream>

using namespace std;
long long int ncr(long long int,long long int);

int main()
{
  long long int n,r;
  printf("\n Enter the numbers n,r:");
  scanf("%lld %lld",&n,&r);
  printf("\n %lld",ncr(n,r));
  return 0;
}

long long int ncr(long long int n,long long int r)
{
  if(r==n||r==0)
  return 1;
  else
  return ncr(n-1,r-1)+ncr(n-1,r);
}
