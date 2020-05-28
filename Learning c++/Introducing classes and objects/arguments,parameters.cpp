#include<iostream>

using namespace std;

class Gradebook
{
public:
  void displayMessage(string courseName)
  {
    cout<<"Welcome to "<<courseName<<"!"<<endl;
  }
};

int main()
{
  string nameOfCourse;
  Gradebook myGradebook;

  cout<<"Please enter the course name:";
  getline(cin,nameOfCourse);
  cout<<endl;

  myGradebook.displayMessage(nameOfCourse);
  return 0;
}
