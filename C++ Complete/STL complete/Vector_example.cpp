#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main(){
        vector<char> v(10); //Creates a vector of length 10
        unsigned int i;
        cout<<"Vector size="<<v.size()<<"\n";
        for(i=0; i<10; i++) v[i]=i+'a';
        cout<<"current contents"<<"\n";
        for(i=0; i<10; i++) cout<<v[i]<<"  ";
        cout<<"\n\n";

        //Adding more elements;
        for(i=0; i<10; i++) v.push_back(i+'a'+10);
        cout<<"Vector size="<<v.size()<<"  ";
        cout<<"\n";

        cout<<"current contents"<<"\n";
        for(i=0; i<v.size(); i++) cout<<v[i]<<"  ";
        cout<<"\n\n";

        //modifying vector components
        for(i=0; i<v.size(); i++) v[i]=toupper(v[i]);
        cout<<"current contents"<<"\n";
        for(i=0; i<v.size(); i++) cout<<v[i]<<"  ";
        cout<<endl;




}
