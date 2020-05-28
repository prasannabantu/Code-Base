#include <stdio.h>

void insertion(int a[],int);
void disp(int A[],int size);

int main()
{
        int a[]={24,34,-12,-6,124,0,23,19};
        int size=sizeof(a)/sizeof(a[0]);
        disp(a,size);
        insertion(a,size);
        disp(a,size);
        return 0;
}

void disp(int A[],int size)
{
        printf("\n");
        for (size_t i = 0; i < size; i++) {
                printf(" %d ",A[i]);
        }
        printf("\n");
}

void insertion(int a[],int n)
{
        for(int i=1; i<n; i++)
        {
                int value=a[i],temp=i;
                while(temp>0&&a[temp-1]>value)
                {
                        a[temp]=a[temp-1];
                        temp--;
                }
                a[temp]=value;
        }
}
