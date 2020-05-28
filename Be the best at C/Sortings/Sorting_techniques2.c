#include <stdio.h>
#include <stdlib.h>

void bsort(int *a,int);
void ssort(int *a,int);
void isort(int *a,int);
void mergeSort(int *a,int,int);
void merge(int *a,int,int,int);
int partition(int *a,int,int);
void quickSort(int *a,int,int);
void print(int *a,int);
void swap(int*,int*);


int main()
{
        //Reading the length of array
        int n;
        scanf("%d",&n);

        //Memory assigning
        int *a=(int*)malloc(sizeof(int)*n);
        for(int i=0; i<n; i++)
                a[i]=rand()%50;

        int *a1=(int*)malloc(sizeof(int)*n);
        for(int i=0; i<n; i++)
                a1[i]=rand()%50;

        int *a2=(int*)malloc(sizeof(int)*n);
        for(int i=0; i<n; i++)
                a2[i]=rand()%50;

        int *a3=(int*)malloc(sizeof(int)*n);
        for(int i=0; i<n; i++)
                a3[i]=rand()%50;

        int *a4=(int*)malloc(sizeof(int)*n);
        for(int i=0; i<n; i++)
                a4[i]=rand()%50;

        bsort(a,n);
        ssort(a1,n);
        isort(a2,n);

        print(a3,n);
        mergeSort(a3,0,n-1);
        print(a3,n);

        printf("\n");

        print(a4,n);
        quickSort(a4,0,n-1);
        print(a4,n);




        return 0;
}

void print(int *a,int n)
{
        printf("\n");
        for(int i=0; i<n; i++)
                printf(" %d ",a[i]);
}

void bsort(int *a,int n)
{
        print(a,n);
        for(int i=n-2; i>=0; i--)
                for(int j=0; j<=i; j++)
                        if(a[j]>a[j+1])
                                swap(&a[j],&a[j+1]);
        print(a,n);
        printf("\n\n");
}

void swap(int *a,int *b)
{
        int temp=*a;
        *a=(*b);
        *b=temp;
}

void ssort(int *a,int n)
{
        print(a,n);
        for(int i=0; i<n-1; i++)
                for(int j=i+1; j<n; j++)
                        if(a[i]>a[j])
                                swap(&a[i],&a[j]);
        print(a,n);
        printf("\n\n");
}

// print(a,n);
// print(a,n);
// printf("\n\n");

void isort(int *a,int n)
{
        print(a,n);
        for(int i=1; i<=n-1; i++)
        {
                int temp=a[i];
                int point=i-1;
                while(temp<a[point]&&point>=0)
                {
                        a[point+1]=a[point];
                        point--;
                }
                a[point+1]=temp;
        }
        print(a,n);
        printf("\n\n");
}

void merge(int *a,int l1,int r1,int r2)
{
        int len=r2-l1+1;
        int temp[len],l2=r1+1;
        int b=l1,k=0;

        while(l1<=r1&&l2<=r2)
        {
                if(a[l1]<a[l2]) temp[k++]=a[l1++];
                else temp[k++]=a[l2++];
        }
        while(l1<=r1)
                temp[k++]=a[l1++];
        while(l2<=r2)
                temp[k++]=a[l2++];

        k=0;

        for(int i=b; i<=r2; i++)
                a[i]=temp[k++];


}

void mergeSort(int *a,int s,int e)
{
        if(s<e)
        {
                int m=s+(e-s)/2;
                mergeSort(a,s,m);
                mergeSort(a,m+1,e);
                merge(a,s,m,e);
        }
}

void quickSort(int *a,int l,int r)
{
        if(l<r)
        {
                int p=partition(a,l,r);

                quickSort(a,l,p-1);
                quickSort(a,p+1,r);
        }
}

int partition(int *a,int low,int high)
{
        int temp=a[high];
        int i=low-1;
        for(int j=low; j<=high-1; j++)
        {
                if(a[j]<temp)
                {
                        i++;
                        swap(&a[i],&a[j]);
                }
        }
        swap(&a[i+1],&a[high]);
        return i+1;
}
