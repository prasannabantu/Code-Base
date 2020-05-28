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
