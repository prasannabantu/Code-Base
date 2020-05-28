#include<stdio.h>



int main()
{
  int a[10];
  for (size_t i = 0; i < 10; i++) {
    printf(" %d ",a[i]);
  }

 a[0]=124;
 a[1]=256;
  printf("\naddress of a is %d\n",a );
  printf("\nfirst value in a %d\n",*a);
 printf("\nfirst changed value in a %d\n",*a+1);
 printf("\nsecond value in a %d\n",*(a+1));

 printf("\n\n\n");

 int a2d[4][4],k=0;


 for (size_t i = 0; i < 4; i++) {
   for (size_t j = 0; j < 4; j++) {
     k++;
        a2d[i][j]=i+j+k;
         printf(" %d\t",a2d[i][j]);
   }
   printf("\n");
 }

 printf("\n\n\n");

 printf("%d\n",a2d);
 printf("%d\n",a2d[0]);
 printf("%d\n",*a2d);
 printf("%d\n",&a2d[0][0]);

printf("\n\n\n");

printf("%d\n",a2d);
printf("%d\n",a2d[0][0]);
printf("%d\n",**a2d);

printf("\n\n\n");

 int (*p)[4]=a2d;
 printf("%d\n",**p);
 p++;
 printf("%d\n",**p);
 p++;
 printf("%d\n",**p);
 p++;
 printf("%d\n",**p);


  return 0;
}
