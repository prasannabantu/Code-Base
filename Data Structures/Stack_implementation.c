#include <stdio.h>

#define MAX 10
struct stack
{
        int data[MAX];
        int top;
};

typedef struct stack st;

void createStack(st *s)
{
        s->top=-1;
}

int isFull(st *s)
{
        if(s->top==MAX-1)
                return 1;
        else return 0;
}

int isEmpty(st *s)
{
        if (s->top==-1)
                return 1;
        else return 0;
}

/*

   void push(st *s)
   {
        int n;
        printf("\n Enter the number you want to push:");
        scanf("%d",&n);

        if(isFull(s))
                printf("STACK IS FULL MY FRIEND");
        else
                s->data[++(s->top)]=n;
   }

 */

void push(st *s,int n)
{
        if(isFull(s))
                printf("STACK IS FULL MY FRIEND");
        else
                s->data[++(s->top)]=n;
}

void pop(st *s)
{
        if(isEmpty(s))
                printf("STACK IS EMPTY MY FRIEND");
        else
                s->top--;
}

void printstack(st *s)
{
        int l=s->top;
        printf("\ns->top=%d\n",s->top);
        for(int i=0; i<=l; i++)
        {
                printf(" %d ",s->data[(s->top)--]);
        }
        s->top=l;
        printf("\n");
}


int main()
{
        int con=1;
        st *s;
        createStack(s);

        do {
                printf("\n ***STACK OPERATIONS");
                printf("\n 1. PUSH");
                printf("\n 2. POP");
                printf("\n 3. EXIT");
                printf("\n ***************");
                int cho;
                printf("\n Enter your choice:");
                scanf("%d",&cho);


                switch(cho)
                {
                case 1: push(s,5);
                        break;
                case 2: pop(s);
                        break;
                case 3: printf("Thanks You");
                        con=0;
                        break;
                default:
                        printf("\nUnna options lo edo okati type chey");
                }
                //  printstack(s);
        } while(con);

        int num;;
        printf("\n Enter a number:");
        scanf("%d",&num);
        while(num)
        {

                push(s,num%10);
                num=num/10;
                printstack(s);
        }
        //printstack(s);

        return 0;
}
