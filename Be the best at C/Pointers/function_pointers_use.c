#include<stdio.h>
#include<math.h>

int compare(int a,int b);
int scompare(int,int);
void sort(int*,int,int (*compare)(int,int));
void asort(int*,int);
void disp(int*,int);


int main()
{
  int a[]={1,5,45,145,12,8,45,124};
  int b[]={-4,-45,21,-1,45,78,91,56};
  int size=sizeof(a)/sizeof(a[0]);
  int (*p)(int,int);
  p=compare;

  disp(a,size);
  sort(a,size,p);
  disp(a,size);

  int (*p2)(int,int);
  p2=scompare;

  disp(b,size);
  sort(b,size,p2);
  disp(b,size);

}


void sort(int *a,int size,int (*compare)(int,int))
{
  for(int i=0;i<size;i++)
  for(int j=0;j<size-1;j++)
  {
    int temp;
    if(compare(a[i],a[j])>0)
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
}


void disp(int *A,int size)
{
  printf("\n");
  for (size_t i = 0; i < size; i++)
  printf(" %d ",A[i]);
  printf("\n");
}


int compare(int a,int b)
{
  if (a>b)
  return 1;
  return -1;
}


int scompare(int a,int b)
{
  if (abs(a)>abs(b))
  return 1;
  return -1;
}
