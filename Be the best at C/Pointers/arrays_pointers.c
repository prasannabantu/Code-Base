#include<stdio.h>

int adder(int *A,int size);

int main()
{
   int A[]={2,4,6,8,10};
   int c=adder(A,5);
   printf("Sum=%d",c);
}


int adder(int *A,int size)
{
  int sum=0;
  for (size_t i = 0; i < size; i++) {
    sum+=A[i];
  }
  return sum;
}
