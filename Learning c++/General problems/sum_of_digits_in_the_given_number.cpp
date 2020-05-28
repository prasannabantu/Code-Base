#include<iostream>

int sum(int);
using namespace std;

int main(){
  int n,summ;
  scanf("%d",&n);
  cout<<"\nThe given number is: "<<n;

  summ=sum(n);
  cout<<"\n The sum of digits of a given number is:"<<summ;
  return 0;

}


int sum(int n)
{
  int temp,k,total=0;
  cout<<"\nEach of the individual digits would be:"<<endl;
  while(n!=0)
  {
    k=n%10;
    printf(" %d ",k);
    total+=k;
    n=n/10;
  }
  return total;

}
