#include<iostream>
#include<malloc.h>
using namespace std;


int main()
{
    int n,**a,k=0;
    scanf("%d",&n);
    a=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    a[i]=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        a[i][j]=k++;
        }

    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf(" %d ",a[i][j]);
        }
      printf("\n");
    }
    return 0;
}
9 
