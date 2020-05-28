#include <iostream>
#include <malloc.h>
#include <list>
using namespace std;

typedef struct node {
        int data;
        struct node* link;
}st;

st* createNewNode(int data)
{
        st* s=(st*)malloc(sizeof(st)); s->data=data; s->link=NULL;
        return s;
}

st* insert(st* root,int data)
{
        if(root==NULL) return createNewNode(data);
        else
        {
                st* temp=root;
                while(temp->link!=NULL)
                        temp=temp->link;
                temp->link=createNewNode(data);
        }
        return root;
}

void print_list(st* root)
{

        cout<<"Linked list"<<endl;
        while(root!=NULL)
        {
                cout<<root->data<<" ";
                root=root->link;
        }
        cout<<endl;
}



void joinlist(st* l1,st* l2)
{
        cout<<"hello I am in";
        st* list1=l1;
        st* list2=l2;
        if(list1==NULL||list2==NULL) cout<<"one of the lists is empty";
        int count=0;
        //    st* head= (list1->data)<(list2->data) ? (list1->link) : (list2->link);
        while(list1!=NULL||list2!=NULL)
        {
                if(list1->data<list2->data)
                {
                        int temp=list1->data;
                        list1->data=list2->data;
                        list2->data=temp;
                        list2=list2->link;
                }
                else
                {
                        list1=list1->link;
                }
                count++;
                if(count==4) break;
        }
        // if(list1->link!=NULL)
        // while(s->link)
}



int main()
{

        int array1_size=5;
        int array2_size=9;

        list<int>array1;
        list<int>array2;
        // for(int i=0; i<array1_size; i++)
        // {
        //         array1.push_back(rand()%30);
        //         array2.push_back(rand()%30+20);
        // }

        for(int i=0; i<array1_size; i++)
        {
                array1.push_back(i*2);
                array2.push_back(i*2+1);
        }

        list<int>::iterator p1,p2;
        p1=array1.begin();
        p2=array2.begin();

        cout<<endl;
        while(p1!=array1.end())
        {
                cout<<*p1<<" ";
                p1++;
        }

        cout<<endl;
        while(p2!=array2.end())
        {
                cout<<*p2<<" ";
                p2++;
        }
        cout<<endl;

        array1.sort(); array2.sort();

        p1=array1.begin();
        p2=array2.begin();

        cout<<endl;
        while(p1!=array1.end())
        {
                cout<<*p1<<" ";
                p1++;
        }

        cout<<endl;
        while(p2!=array2.end())
        {
                cout<<*p2<<" ";
                p2++;
        }
        cout<<endl;

        st* list1=NULL;
        st* list2=NULL;

        p1=array1.begin();
        p2=array2.begin();

        list1=insert(NULL,*p1);
        list2=insert(NULL,*p2);
        p1++; p2++;
        while(p1!=array1.end())
        {
                insert(list1,*p1);
                p1++;
        }
        while(p2!=array2.end())
        {
                insert(list2,*p2);
                p2++;
        }
        cout<<"--------------------------------"<<endl;
        print_list(list1);
        print_list(list2);
        joinlist(list1,list2);
        cout<<"--------------------------------"<<endl;
        print_list(list1);
        print_list(list2);




        return 0;
}
