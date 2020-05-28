#include<stdio.h>
#include<string.h>

void print(char*);

int main()
{
   char a[10]="Prasanna";
   printf("%s size=%d",a,strlen(a));
   print(a);

   //char *a='prasanna' is allowed but the array cannot be modified

}


void print(char *a)
{
  int i=0;
  while((a[i])!='\0')
  {
    printf("%c",a[i]);
    i++;
  }
}
