#include <stdio.h>

void sort(int *A,int size,int (*compare)(int,int));
int big(int,int);
int small(int,int);
void swap(int*,int*);
void disp(int *A,int n);


int main()
{
        int a[]={25,-65,-91,14,23,1,3,8,10};
        int size=sizeof(a)/sizeof(a[0]);
        disp(a,size);
        sort(a,size,big);
        disp(a,size);
        printf("\n----------------------------------\n");
        disp(a,size);
        sort(a,size,small);
        disp(a,size);
        return 0;
}


void sort(int *a,int size,int (*compare)(int,int))
{
        for(int i=0; i<size-1; i++)
                for(int j=0; j<size-1; j++)
                {
                        if(compare(a[j],a[j+1])==1)
                                swap(&a[j],&a[j+1]);

                }

}

void swap(int *a,int *b)
{
        int temp=(*a);
        (*a)=(*b);
        (*b)=temp;
}

void disp(int *A,int n)
{
        printf("\n\n");
        for (size_t i = 0; i < n; i++) {
                printf(" %d ",A[i]);
        }
        printf("\n\n");
}

int big(int a,int b)
{
        if(a>b) return 1;
        return 0;
}

int small(int a,int b)
{

        if(a<b) return 1;
        return 0;
}
