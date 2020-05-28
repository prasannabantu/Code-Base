#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
        vector<int>even(10);
        vector<int>::iterator p;
        int i=0;
        p=even.begin();
        while(p!=even.end())
        {
                *p=i*2;
                i++;
                p++;
        }

        p=even.begin();
        while(p!=even.end())
        {
                cout<<*p<<" ";
                p++;
        }


}
