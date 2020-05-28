#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
using namespace std;


//Still lot to work on the code is not working for now
int main()
{
        vector <char> str(0);
        cout<<"The size of vector is:"<<str.size()<<"\n";
        char words[]={'L','o','r','d',' ','Y','o','u'};
        cout<<"The size of array is:"<<strlen(words)<<"\n";
        for(int i=0; i<strlen(words); i++)
                str.push_back(words[i]);
        cout<<"The size of vector is:"<<str.size()<<"\n";
        cout<<"The string is:";
        for(int i=0; i<strlen(words); i++)
                cout<<str[i];
        for(int i=0; i<strlen(words); i++)
        {
                if (islower(str[i]))
                        tolower(str[i]);
                else
                        tolower(str[i]);
        }
        cout<<"\n";
        for(int i=0; i<strlen(words); i++)
                cout<<str[i];



        return 0;
}
