#include <stdio.h>

int main()
{
        char onlyLetters[20];
        scanf("%[a-zA-Z]s",onlyLetters);
        printf("%s\n",onlyLetters);

        for(int i=0; i<15; i++) printf("%d %8d %8d\n",i,i*i,i*i*i);
        printf("\n");

        for(int i=0; i<15; i++) printf("%d %08d %08d\n",i,i*i,i*i*i);
        printf("\n");

        for(int i=0; i<15; i++) printf("%d %8.4d %8.4d\n",i,i*i,i*i*i);
        printf("\n");

        return 0;
}
