#include <iostream>
#include <list>
using namespace std;


int main()
{
        list<int> lst1,lst2;
        list<int>::iterator p;
        for(int i=0; i<10; i=i+2)
                lst1.push_back(i);

        for(int i=1; i<10; i=i+2)
                lst2.push_back(i);

        p=lst1.begin();

        cout<<endl;
        while(p!=lst1.end())
        {
                cout<<*p<<" ";
                p++;
        }

        p=lst2.begin();
        cout<<endl;
        while(p!=lst2.end())
        {
                cout<<*p<<" ";
                p++;
        }

        lst1.merge(lst2);
        cout<<lst2.empty();

        p=lst1.begin();

        cout<<endl;
        while(p!=lst1.end())
        {
                cout<<*p<<" ";
                p++;
        }

        return 0;
}
