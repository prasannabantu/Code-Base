#include <iostream>
#include <list>
using namespace std;


int main()
{
        list<int> lst;
        for(int i=0; i<5; i++)
        {
                lst.push_back(i);
        }
        cout<<"size="<<lst.size()<<endl;

        list<int>::iterator p;
        p=lst.begin();
        while(p!=lst.end())
        {
                cout<<*p<<" ";
                p++;
        }
        cout<<"\n";
        for(int i=0; i<5; i++)
        {
                lst.push_front(i*4);
        }

        p=lst.begin();
        while(p!=lst.end())
        {
                cout<<*p<<" ";
                p++;
        }
        cout<<endl;

        //if p-- is put later
        p=lst.end();
        while(p!=lst.begin())
        {
                cout<<*p<<" ";
                p--;
        }

        cout<<endl;

        p=lst.end();
        while(p!=lst.begin())
        {
                p--;
                cout<<*p<<" ";
        }

        //Important thing to observe the .end doesnot return the adrees of last item
        //But end()-1 return last element
        return 0;
}
