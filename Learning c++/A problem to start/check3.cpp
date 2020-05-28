#include<iostream>
int rev(int n)
{
    int k=n,s=0,l;
    while(n)
    {
       l=n%10;
       s=(s+l)*10;
       n=n/10;
    }
    return  s/10;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",rev(n));
    return 0;
}
