//Programme for bit manipulation basics
//-------------------------Powers of 2------------------------------//
/*What the following programmes do is they check whether the given numbers is a Power
of two or power of two reduced by one etc

This is how first programme it works
let   x = 7;  y = 8;
if we do this x&(x-1)
      for 7 it is 111----->110   That is 7 tranformed into 6
what if we do it with y ie. is  y&(y-1)
      for 8 it is 1000---->0000  That is we get a 0
    %%%%%%% If x is a power of 2 then x&(x-1)  would always be a zero
    similarly we can check 2^n-1 etc such things just look at the programme
    */

#include<iostream>
#define N 15000
using namespace std;


int main()
{
  int n=N;



  for(int i=0;i<50;i++)
  printf("-");
  printf("\nProgramme for finding powers of two\n");
  for(int i=1;i<N;i++)
  {
    //Here I am tring to find powers of two by using not on resultant of i&(i-1)
    if(!(i&(i-1)))
      printf("The number %d is power of 2\n",i);
  }
  for(int i=0;i<50;i++)
  printf("-");

printf("\n");

  for(int i=0;i<50;i++)
  printf("-");
  printf("\nProgramme for finding powers of two\n");
  for(int i=1;i<N;i++)
  {
    //Here I am tring to find powers of two by using not on resultant of i&(i-1)
    if(!(i&(i+1)))
      printf("The number %d is power of 2 reudced by 1\n",i);
  }
  for(int i=0;i<50;i++)
  printf("-");






  return 0;
}
