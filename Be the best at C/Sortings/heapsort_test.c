#include <stdio.h>
#include <malloc.h>

void print_arr(int*,int);
void heapify(int *a,int,int);
void swap(int *a,int *b);
void heapSort(int *a,int);

int main()
{
        //For reading the array
        int len_array,*arr;
        scanf("%d",&len_array);
        arr=(int*)malloc(sizeof(int)*len_array);

        //For initializing the len_array
        for(int i=0; i<len_array; i++)
                arr[i]=rand()%53;

        //For printing the array
        print_arr(arr,len_array);
        heapSort(arr,len_array);
        print_arr(arr,len_array);



        return 0;
}

void print_arr(int *a,int n)
{
        printf("\n");
        for(int i=0; i<n; i++)
        {
                printf("%d ",a[i]);
        }
}

void heapify(int *a,int n,int i)
{
        int l=2*i+1;
        int r=2*i+2;
        int big=i;
        if(l<n&&a[l]>a[big])
                big=l;
        if(r<n&&a[r]>a[big])
                big=r;
        if(big!=i)
        {
                swap(&a[big],&a[i]);
                heapify(a,n,i);
        }
}

void swap(int *a,int *b)
{
        int temp=*a;
        *a=(*b);
        *b=temp;
}



void heapSort(int *a,int n)
{

        for(int i=n/2-1; i>=0; i--)
                heapify(a,n,i);
        for(int i=n-1; i>=0; i--)
        {
                swap(&a[0],&a[i]);
                heapify(a,i,0);
        }

}
