#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(){

        vector<char>message;
        vector<char>name;
        vector<char>::iterator p;
        char wishing[]=" How are you";
        char owner[]="Prasanna";
        for(int i=0; wishing[i]; i++) message.push_back(wishing[i]);
        for(int i=0; i<message.size(); i++) cout<<message[i];
        for (size_t i = 0; owner[i]; i++) name.push_back(owner[i]);
        cout<<"\n";
        for(int i=0; i<name.size(); i++) cout<<name[i];
        p=message.begin();

        //Insertion in vector
        message.insert(p,name.begin(),name.end());
        cout<<"\n";
        for(int i=0; i<message.size(); i++) cout<<message[i];

        //Deletion in vector
        p=message.begin();
        message.erase(p,p+strlen(owner));
        cout<<"\n";
        for(int i=0; i<message.size(); i++) cout<<message[i];




        return 0;
}

