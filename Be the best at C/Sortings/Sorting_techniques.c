 #include <stdio.h>
#include <malloc.h>

void print_arr(int*,int);
void b_sort(int *a,int n);
void s_sort(int *a,int n);
void i_sort(int *,int);
void m_sort(int *,int);
void swap(int *,int *);

void printArray(int[], int size);
void mergeSort(int a[], int l, int r);
void merge(int arr[], int l, int m, int r);

int main()
{
        //For reading the array
        int len_array,*arr;
        scanf("%d",&len_array);
        arr=(int*)malloc(sizeof(int)*len_array);

        //For initializing the len_array

        // for(int i=0; i<len_array; i++)
        //         scanf("%d",&arr[i]);

        for(int i=0; i<len_array; i++)
                arr[i]=rand()%25;

        int *arr2=(int*)malloc(sizeof(int)*len_array);
        for(int i=0; i<len_array; i++)
                arr2[i]=rand()%23;

        int *arr3=(int*)malloc(sizeof(int)*len_array);

        for(int i=0; i<len_array; i++)
                arr3[i]=rand()%23;

        int *arr4=(int*)malloc(sizeof(int)*len_array);
        for(int i=0; i<len_array; i++)
                arr4[i]=rand()%23;

        //For printing the array
        b_sort(arr,len_array);
        s_sort(arr2,len_array);
        i_sort(arr3,len_array);

        printf("\n===========MERGE SORT==========");
        print_arr(arr4,len_array);
        mergeSort(arr4,0,len_array-1);
        print_arr(arr4,len_array);



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


void b_sort(int *a,int n)
{
        printf("\n===========BUBBLE SORT==========");
        print_arr(a,n);
        for(int i=n-2; i>=0; i--)
                for(int j=0; j<=i; j++)
                {
                        if(a[j]>a[j+1])
                                swap(&a[j],&a[j+1]);
                }
        print_arr(a,n);
}

void swap(int *a,int *b)
{
        int temp=*a;
        *a=(*b);
        *b=temp;
}

void s_sort(int *a,int n)
{
        printf("\n===========SELECTION SORT==========");
        print_arr(a,n);
        for(int i=0; i<n-1; i++)
                for(int j=i+1; j<n; j++)
                        if(a[i]>a[j])
                                swap(&a[i],&a[j]);
        print_arr(a,n);
}

void i_sort(int *a,int n)
{
        printf("\n===========INSERTION SORT==========");
        print_arr(a,n);
        for(int i=1; i<n; i++)
        {
                int pos=i-1;
                int temp=a[i];
                while(temp<a[pos]&&pos>=0)
                {
                        a[pos+1]=a[pos];
                        pos--;
                }
                a[pos+1]=temp;
        }
        print_arr(a,n);
}

void merge(int a[],int l1,int r1,int r2)
{
        int len=r2-l1+1;
        int l2=r1+1,b=l1;
        int temp[len],k=0;

        while(l1<=r1&&l2<=r2)
        {
                if(a[l1]>a[l2])
                        temp[k++]=a[l2++];
                else
                        temp[k++]=a[l1++];
        }
        while(l1<=r1)
                temp[k++]=a[l1++];
        while(l2<=r2)
                temp[k++]=a[l2++];
        k=0;

        for(int i=b; i<=r2; i++)
                a[i]=temp[k++];
}

void mergeSort(int a[],int s,int e)
{
        if(s<e)
        {
                int m=s+(e-s)/2;
                mergeSort(a,s,m);
                mergeSort(a,m+1,e);
                merge(a,s,m,e);
        }
}
