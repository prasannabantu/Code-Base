#include<stdio.h>
#include<malloc.h>

void printer();

int main()
{
  int n;
  scanf("%d",&n );
  for (size_t i = 0; i < n; i++) {
    printer();
  }

}

void printer()
{
  int *a=(int*)calloc(10,sizeof(int)*10);
  for (size_t i = 0; i < 10; i++) {
       printf(" %d ",a[i]);
  }
  printf("\n");
  //If free is not used here there is a chance for mismanagement of memory
  free(a);
}
