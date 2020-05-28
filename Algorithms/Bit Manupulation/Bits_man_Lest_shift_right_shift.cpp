/*The programme is for the left anf right shifting of a stream of bits*/

#include<iostream>
void dec_to_bin(int n);
using namespace std;


int main()
{
  int n,d,l;
  printf("----------------------------------------------------------------------------------");
  printf("\n\t  LEFT ROTATION OF BITSTREAM\n");
  printf("----------------------------------------------------------------------------------");
  printf("\n Enter the number and rotations");
  scanf("%d %d",&n,&d);
  printf("The number %d in binaryform:      ",n);
  dec_to_bin(n);
  //Left rotations
  l= (n<<d)|(n>>(31-d));
  printf("\nAfter rotation the binary number:");
  dec_to_bin(l);




  printf("\n----------------------------------------------------------------------------------");
  printf("----------------------------------------------------------------------------------");
}





void dec_to_bin(int n)
{
  if(n!=0)
  {
    dec_to_bin(n/2);
    printf(" %d ",n%2);
  }

return;
}
