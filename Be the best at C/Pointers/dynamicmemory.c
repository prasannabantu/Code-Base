#include<stdio.h>
#include<malloc.h>

int main()
{

  int a,*p;
  p=(int*)malloc(sizeof(int));
  *p=124;
  printf("The value in p %d\n",*p );

  //freeing of memory
  free(p);

 *p=456;
  printf("The value in p %d\n\n\n",*p );


  //Block allocation of memory

  //Use of malloc
  int *arr;
  arr=(int*)malloc(10*sizeof(int));
  //Now arr can be used as a array but the elements are garabage values
  for (size_t i = 0; i < 10; i++) {
    printf("%d\n",arr[i] );
  }

  printf("\n\n\n" );

 //Use of calloc
 //arr2 elements are assigned zero
  int *arr2;
  arr2=(int*)calloc(10,sizeof(int));
  for (size_t i = 0; i < 10; i++) {
    printf("%d\n",arr2[i]);
  }


  //Use of realloc
  //arr2 size can now be changed

  int *arr3=(int*)realloc(arr2,20);
  for (size_t i = 0; i < 20; i++) {
    printf("%d\n",arr2[i]);
  }

  //For freeing a
  free(arr2);


  //int *p=(int*)realloc(NULL,n*sizeof(int))   is similar using malloc
  return 0;
}
