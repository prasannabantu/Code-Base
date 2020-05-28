#include<iostream>

int sum(int n)
{
  int temp,k,total=0;
  while(n!=0)
  {
    k=n%10;
    total+=k;
    n=n/10;
  }
  return total;

}

int rev(int n)
{
    int k=n,s=0,l;
    while(n)
    {
       l=n%10;
       s=(s+l)*10;
       n=n/10;
    }
    return s/10;

}
int main()
{
    int n,max=0,temp,l;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           temp=sum(i);
         if(temp>max)
         {
             max=temp;
             l=i;
         }
        }
    }
    if(n%l==0&&n%rev(l)==0)
        l>rev(l)?printf("%d",rev(l)):printf("%d",l);
    else
        printf("%d",l);
}
