#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
        if(argc!=2)
        {
                printf("You forgot to type your name");
                exit(1);
        }
        else printf("yo %s",argv[1]);
}
