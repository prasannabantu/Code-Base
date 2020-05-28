// Programme for adding,substracting,multiplying,division of two numbers
#include<iostream>

int main()
{
  int n1;
  int n2;
  int result;
  //Addition
  std::cout<<"\n\tAddition of numbers";
  std::cout<<"\n Enter the first number:";
  std::cin>>n1;
  std::cout<<"Enter the second number:";
  std::cin>>n2;
  result=n1+n2;
  std::cout<<"The result is "<<result<<std::endl;

  //Substraction
  std::cout<<"\n\t Substarction of numbers";
  std::cout<<"\n Enter the first number:";
  std::cin>>n1;
  std::cout<<"Enter the second number:";
  std::cin>>n2;
  result=n1-n2;
  std::cout<<"The result is "<<result<<std::endl;

 //Multiplication
 std::cout<<"\n Multiplication";
 std::cout<<"\n Enter the first number:";
 std::cin>>n1;
 std::cout<<"Enter the second number:";
 std::cin>>n2;
 result=n1*n2;
 std::cout<<"The result is "<<result<<std::endl;

//division
std::cout<<"\n Division operation";
std::cout<<"\n Enter the first number:";
std::cin>>n1;
std::cout<<"Enter the second number:";
std::cin>>n2;
result=n1/n2;
std::cout<<"The result is "<<result<<std::endl;
return 0;
}
