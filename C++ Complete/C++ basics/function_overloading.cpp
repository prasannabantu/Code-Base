#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void stradd(char *s,int n)
{
        char tempCharacter[2];
        sprintf(tempCharacter, "%d",n);
        strcat(s,tempCharacter);
}

void stradd(char *s1,char *s2)
{
        strcat(s1,s2);
}

int main()
{
        char str1[80]="Hello";
        char str2[80]="Why";
        stradd(str1,str2);
        cout<<str1;
        printf("\n");
        stradd(str2,45);
        cout<<str2;
        return 0;
}
