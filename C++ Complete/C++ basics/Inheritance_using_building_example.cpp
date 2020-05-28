#include <iostream>

using namespace std;

class Building {
int rooms;
int floors;
public:
void setRooms();
void getRooms();
void setFloors();
};

class Hospital : public Building {
int patients;
int doctors;
public:
void setPatients();
void getPatients();
void setDoctors();
};

void Hospital::setPatients(){
        cout<<"Enter no of patients:";
        cin>>patients;
}

void Hospital::setDoctors(){
        cout<<"Enter no of doctors:";
        cin>>doctors;
}

void Hospital::setFloors(){
        cout<<"Enter no of floors:";
        cin>>floors;
}

void Hospital::setRooms(){
        cout<<"Enter no of rooms:";
        cin>>rooms;
}

void Hospital::getRooms(){
        cout<<"The no of floors:"<<floors<<" and rooms:"<<rooms<<"\n";
}

void Hospital::getPatients(){
        cout<<"The no of doctors:"<<doctors<<" and patients:"<<patients<<"\n";
}

int main(){
        Hospital jmj;
        jmj.setRooms();
        jmj.setFloors();
        jmj.setPatients();
        jmj.setDoctors();
        jmj.getRooms();
        jmj.getPatients();

}
