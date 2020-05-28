#include <stdio.h>

#define PRINT_LINE "\n========================================\n"
#define FOR(a)  for(int i=0; i<a; i++)

int main()
{
        printf(PRINT_LINE );
        printf("For the glory of god\n" );
        printf(PRINT_LINE );
        FOR(20) printf("hello %d\n",i);
        return 0;
}
