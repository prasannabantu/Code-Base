#include<iostream>

using namespace std;

class Book
{
public:
  void pages(){
    cout<<"\n How many pages does this book contain:";
  }
  void letters(){
    cout<<"\n How many letters does the heading contain";
  }

};


int main()
{
  Book book;
  book.pages();
  book.letters();
  return 0;
  }
