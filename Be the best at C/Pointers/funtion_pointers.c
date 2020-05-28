#include<stdio.h>

void dispn(char *name);
int mul(int,int);
void disp()
{
  printf("\n\nGod is Love\n\n");
}

void dispn(char *name)
{
  printf(" Hello frined %s",name);
}

int main()
{
  int (*p)(int,int);
  p=&mul;  //we can also use p=mul instead p=&mul
  printf(" %d * %d = %d\n\n",2,6,(*p)(2,6));
  printf(" %d * %d = %d",2,6,p(2,6));
  void (*d)();
  d=disp;
  d();

  char a[20];
  scanf("%s",a);

  void (*u)(char*);
  u=dispn;
  u(a);
  return 0;
}

int mul(int a,int b)
{
  return a*b;
}
