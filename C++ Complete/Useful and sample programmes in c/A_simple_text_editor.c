#include <stdio.h>

#define MAXLINES 100
#define LEN 80

char textEditor[MAXLINES][LEN];

int main()
{
        int i,j,point;
        printf("Enter an empty line to quit.\n");

        for(point=0; point<MAXLINES; point++)
        {
                printf("%d:",point);
                gets(textEditor[point]);
                if(!*textEditor[point]) break;
        }

        for(i=0; i<point; i++) {
                for(j=0; textEditor[i][j]; j++) putchar(textEditor[i][j]);
                putchar('\n');
        }

        return 0;
}
