#include<iostream>
#include<malloc.h>

using namespace std;


int main()
{
//Variables part
  int ncases,*tests,i,j;

//Reading and memory allocation part
  scanf("%d",&ncases);
  tests=(int*)malloc(sizeof(int)*ncases);
  
//Reading the testscases and saving them into array
  for(i=0;i<ncases;i++)
  scanf("%d",&tests[i]);



//Printing output
  for(j=0;j<ncases;j++)
  {
    printf("%d\n",tests[j]);
  }

  return 0;
}
