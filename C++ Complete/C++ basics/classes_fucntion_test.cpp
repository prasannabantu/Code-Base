#include <iostream>

using namespace std;

class Character {
float health;
char gender;
public:
void setHealth();
void setGender();
void printHealth();
void printGender();
};

void Character::setHealth()
{
        cout<<"Enter the health:";
        cin>>health;
}

void Character::setGender()
{
        cout<<"Enter the gender:";
        cin>>gender;
}

void Character::printHealth(){
        cout<<"The health is: "<<health<<"\n";
}

void Character::printGender(){
        cout<<"The gender of the Character is: "<<gender<<"\n";
}


int main(){
        Character Naruto;
        Naruto.setHealth();
        Naruto.setGender();
        Naruto.printHealth();
        Naruto.printGender();
        return 0;
}
