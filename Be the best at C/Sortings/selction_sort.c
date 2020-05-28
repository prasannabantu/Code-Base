#include <stdio.h>

void disp(int A[],int size);
int compare(int,int);
void sort(int a[],int,int (*cmp)(int,int));
int exc(int*,int*);

int main()
{
        int a[]={24,34,-12,-6,124,0,23,19};
        int size=sizeof(a)/sizeof(a[0]);
        disp(a,size);
        sort(a,size,compare);
        disp(a,size);
        return 0;
}

int compare(int a,int b)
{
        if (a>b) return 1;
        return 0;
}

int exc(int *a,int *b)
{
        int temp=*a;
        *a=*b;
        *b=temp;
}



void sort(int A[],int size,int (*cmp)(int,int))
{
        for(int i=0; i<size-1; i++)
                for(int j=i+1; j<size; j++)
                        if(cmp(A[i],A[j]))
                                exc(&A[i],&A[j]);

}


void disp(int A[],int size)
{
        printf("\n");
        for (size_t i = 0; i < size; i++) {
                printf(" %d ",A[i]);
        }
        printf("\n");
}
