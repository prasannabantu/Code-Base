#include <stdio.h>
#include <malloc.h>

void print_arr(int*,int);
int maxof(int *a,int n);

int main()
{
        //For reading the array
        int len_array,*arr;
        scanf("%d",&len_array);
        arr=(int*)malloc(sizeof(int)*len_array);

        //For initializing the len_array
        for(int i=0; i<len_array; i++)
                arr[i]=rand()%8;
        // scanf("%d",&arr[i]);

        //For printing the array
        print_arr(arr,len_array);
        int index=maxof(arr,len_array);
        printf("index=%d\n",index);

        index=arr[index];
        int frequency[index+1];
        for(int i=0; i<=index; i++)
                frequency[i]=0;


        printf("\n-------------------------------\n");

        //
        // for(int i=0; i<len_array; i++)
        // {
        //         frequency[arr[i]]++;
        //         printf(" %d\n",i);
        // }

        printf("\n++-------------------------------\n");

        print_arr(frequency,index+1);


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


int maxof(int *a,int n)
{
        int big=0;
        for(int i=1; i<n; i++)
        {
                if(a[i]>a[big])
                        big=i;
        }
        return big;
}
