#include <iostream>
#include <map>
using namespace std;

void print_array(int *a,int n)
{
        cout<<endl;
        for(int i=0; i<n; i++) cout<<a[i]<<" ";
        cout<<endl;
}

void print_array(char *a,int n)
{
        cout<<endl;
        for(int i=0; i<n; i++) cout<<a[i]<<" ";
        cout<<endl;
}

void read_array(int *a,int n)
{
        for(int i=0; i<n; i++) cin>>a[i];
}

int main()
{
        int array_length=26;
        // cin<<array_length;

        //Allocation of memory to array
        char *array=(char*)malloc(sizeof(char)*array_length);

        //Reading the array
        //read_array(array,array_length);
        for(int i=0; i<array_length; i++)
        {
                array[i]=i+'a';
        }

        //Printing the array
        print_array(array,array_length);

        map<int,char> alphabet;
        for(int i=0; i<array_length; i++)
        {
                alphabet.insert(pair<int,char>(i+1,array[i]));
        }

        map<int,char>::iterator alphabet_iterator=alphabet.begin();
        for(int i=0; i<array_length; i++)
        {
                cout<<alphabet_iterator->first<<" : "<<alphabet_iterator->second<<endl;
                alphabet_iterator++;
        }


        return 0;
}
