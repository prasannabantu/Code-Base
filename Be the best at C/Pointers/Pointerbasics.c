#include<stdio.h>

int main()
{
  int a,*p;
  a=1729;
  p=&a;
  printf("\nThe value of a is %d",a);
  printf("\nThe address of a is %d",&a);
  printf("\nThe address of a is %d",p);
  printf("\nThe value of a is %d",*p);
  printf("\nThe size of a is %d",sizeof(a));
  printf("\nThe size of p is %d\n\n",sizeof(p));


  char c,*cp;
  c='a';
  cp=&c;
  printf("\nThe character is %c",c);
  printf("\nThe address is %d",cp);
  printf("\nThe size of cp is %d\n\n",sizeof(cp));


  //Pointer conversion
  int integer,*intpointer;
  intpointer=&integer;
  printf("\nThe value of intpointer is %d",intpointer);
  char *cpoint=(char*)intpointer;
  printf("\nThe value of charpointer is %d\n\n",cpoint);


  //Pointer addition and substraction
  int n=255;
  int *npointer=&n;
  printf("\nThe value of n is %d",n);
  printf("\nThe address of n is %d",&n);

  npointer+=1;

  printf("\nThe address of incremented address of n  is %d",npointer);

  //Void pointer
  //This cannot be dereferenced

  void *v;
  v=npointer;

  printf(" \nThe void pointer is %d\n",v );






  return 0;
}
