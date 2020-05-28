#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

void print_array(int *a,int leng);
void print_mat(int **a,int m,int n);
void initialize(int *a,int n);
int* get_arr(int);
int** get_arr2(int,int);
int *narr(int,int);

int main()
{
        int n;
        scanf("%d",&n);
        int *a;
        a=get_arr(n);
        initialize(a,n);
        print_array(a,n);

        return 0;
}

//For printing a single array
void print_array(int *a,int leng)
{
        for(int i=0; i<leng; i++)
        {
                printf("%d ",a[i]);
        }
}


//For printing a matrix
void print_mat(int **a,int m,int n)
{
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        printf("%d ",a[i][j]);
                }
                printf("\n");
        }
}

void initialize(int *a,int n)
{
        for(int i=0; i<n; i++)
        {
                a[i]=i;
        }
}


//For getting a an array of size n
int* get_arr(int n)
{
        int* address=(int*)malloc(sizeof(int)*n);
        return address;
}

//For getting a matrix of size m,n
int** get_arr2(int m,int n)
{
        int **arr = (int **)malloc(m * sizeof(int *));
        for (int i=0; i<m; i++)
                arr[i] = (int *)malloc(n * sizeof(int));
        return arr;
}

//For generating an array complete with a number num
int* narr(int size,int num)
{
        int arr[size];
        memset(arr, num, size*sizeof(int));
        return arr;
}

//Reading Strings in c

*/// scanf("%s",);
///    scanf("%[^\n]%*c", str);

///*

void swap(int *x,int *y)
{
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
}

int choose_pivot(int i,int j )
{
        return((i+j) /2);
}

void quicksort(int list[],int m,int n)
{
        int key,i,j,k;
        if( m < n)
        {
                k = choose_pivot(m,n);
                swap(&list[m],&list[k]);
                key = list[m];
                i = m+1;
                j = n;
                while(i <= j)
                {
                        while((i <= n) && (list[i] <= key))
                                i++;
                        while((j >= m) && (list[j] > key))
                                j--;
                        if( i < j)
                                swap(&list[i],&list[j]);
                }
                /* swap two elements */
                swap(&list[m],&list[j]);

                /* recursively sort the lesser list */
                quicksort(list,m,j-1);
                quicksort(list,j+1,n);
        }
}
