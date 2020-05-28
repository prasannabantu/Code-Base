#include <stdio.h>


int main()
{
        char ch;
        printf("Enter a character\n");
        do {
                ch=getchar();
                if(islower(ch)) ch=toupper(ch);
                else ch=tolower(ch);
                putchar(ch);
        } while(ch!='.');
        return 0;
}
