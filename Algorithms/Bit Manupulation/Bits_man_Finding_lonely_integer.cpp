//Algorithm works in this way
/*-------------------XOR for finding lonely integer-----------------------
some propertires of XOR
  X^X=0;
  X^0=X;
  X^(y^z)=(x^y)^z;
  The above properties are used for solving the below problem
 1^2^5^3^1^2^3==1^1^2^2^3^3^5=0^0^0^5=5
*/

#include<iostream>

using namespace std;


int main()
{
  int a=5,b=5;
  for(int i=0;i<a;i++)
    for(int j=1;j<b;j++)
    {
      printf(" %d ^ %d  = %d\n",i,j,i^j);
    }
    printf("\n%d",1^2^5^3^1^2^3);
return 0;

}