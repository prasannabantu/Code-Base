#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
    int data;
    struct node* next;
}st;

st* newNode(int num)
{
    st* temp=(st*)malloc(sizeof(st));
    temp->data=num;
    return temp;
}

st* insert(st* root,int num)
{
    st* temp=newNode(num);
    temp->next=NULL;

    if(root==NULL)  return temp;
  
    st* head=root;
    while(head->next!=NULL) head=head->next;
    head->next=temp;
    return root;
}

void printLinkedList(st* root)
{
    cout<<"\n";
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
    cout<<"\n";
}

st* merge2(st* h1,st* h2)
{
    st* temp;
    
    if(h1->data<h2->data)
    {
    temp=h1;
    h1=h1->next;
}
    else
    {
    temp=h2;
    h2=h2->next;
}
st* temp2=temp;

    while(1)
    {
        if(h1->next==NULL) 
            {
                h1->next=h2 ;
                return temp2;
            }
        else if(h2->next==NULL)
        {
            h2->next=h1;
            return temp2;
        }

        if(h1->data<h2->data)
        {
            temp->next=h1;
            h1=h1->next;
        }
        else
        {
            temp->next=h2;
            h2=h2->next;
        }
        
    }
}

st* merge(st* h1,st* h2)
{
    if(!h1) return h2;
    if(!h2) return h1;
    if(h1->data<h2->data)
    {
        h1->next=merge(h1->next,h2);
        return h1;
    }
    else
    {
        h2->next=merge(h2->next,h1);
        return h2;
    }
}  


int main()
{
   st* head=NULL;
   int a[]={1,3,5,7,103,201,301};
   int b[]={2,4,6,8,16,32,64,128};
   cout<<"a size:"<<sizeof(a)/sizeof(a[0])<<" ";
   cout<<"b size:"<<sizeof(b)/sizeof(b[0]);

   int asize=sizeof(a)/sizeof(a[0]);
   int bsize=sizeof(b)/sizeof(b[0]);

   st* head1=NULL;
   st* head2=NULL;

   head1=insert(head1,a[0]);
   head2=insert(head2,b[0]);
   

   for(int i=1;i<asize;i++) insert(head1,a[i]);
   for(int i=1;i<bsize;i++) insert(head2,b[i]);

   

   printLinkedList(head1); 
   printLinkedList(head2);
  // st* h=merge(head1,head2);
   //st* h=merge2(head1,head2);
   printLinkedList(h);
}