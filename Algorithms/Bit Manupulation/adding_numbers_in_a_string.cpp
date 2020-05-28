#include<iostream>

using namespace std;


int main()
{
    int sum,c,d;
    char a[4];
    cin>>a;
     c=(a[0]-'0');
    d=(a[2]-'0');
    printf("  %d %d \n",c,d);
    if(a[1]=='+')
        sum=c+d;
    else
        sum=c-d;
    printf("%d",sum);
    return 0;
}
