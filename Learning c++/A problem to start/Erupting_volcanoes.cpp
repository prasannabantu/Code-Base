#include<iostream>
#include<malloc.h>
int max(int a,int b);
int main()
{
    int n,x,y,w,**a,ma=0,s,m;
    scanf("%d",&n);
    scanf("%d",&m);


    a=(int **)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        a[i]=(int *)malloc(sizeof(int)*n);


    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
            a[i][j]=0;

    for(int k=0;k<m;k++)
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            s=w-(max(abs(x-i),abs(y-j)));
            if(s<0)
            s=0;
            a[i][j]+=s;
            if(ma<a[i][j])
                ma=a[i][j];
        }
    }
      scanf("%d %d %d",&x,&y,&w);
  }
    printf("%d",ma);

printf("\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
        printf(" %d ",a[i][j]);
printf("\n");
      }

    return 0;


}




int max(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
