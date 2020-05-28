#include <stdio.h>
#include <malloc.h>

void print_array(int a[],int n)
{
        printf("\n");
        for(int i=0; i<n; i++)
                printf("%d ",a[i]);
        printf("\n");

}

void swap(int *xp, int *yp)
{
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
}



void bubbleSort(int arr[], int n)
{
        int i, j;
        for (i = 0; i < n-1; i++)
                for (j = 0; j < n-i-1; j++)
                        if (arr[j] > arr[j+1])
                                swap(&arr[j], &arr[j+1]);
}

int main()
{
        int number;
        int money;
        int count=-1;
        int sum=0;
        int T;
        scanf("%d",&T);
        int casecount=0;
        while(T--)
        {
                scanf("%d %d",&number,&money);
                int *a=(int*)malloc(sizeof(int)*number);
                for(int i=0; i<number; i++)
                        scanf("%d",&a[i]);

                //  print_array(a,number);
                bubbleSort(a,number);
                //  print_array(a,number);

                for(int i=0; sum<=money; i++)
                {
                        sum=sum+a[i];
                        count++;
                }
                printf("Case #%d=%d\n",++casecount,count);

                count=-1;
                sum=0;
        }




}
