#include<iostream>
#include<string.h>
int main()
{
  int a[50];
  memset(a,0,sizeof(a));
  for(int i=0;i<50;i++)
  {
    printf("%d\n",a[i]);
    printf("%d\n",a[i]+5);
  }
  return 0;
}
