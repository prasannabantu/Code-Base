#include<stdio.h>

int main()
{
  int a,*spointer,**dpointer;
  a=145;
  spointer=&a;
  dpointer=&spointer;
  printf("value=%d value=%d value=%d address=%d",a,*spointer,**dpointer,spointer);


  return 0;
}
