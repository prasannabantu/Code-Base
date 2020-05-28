#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node* left;
        struct node* right;
};

void inorder(struct node* s)
{
        if(s==NULL) return;
        inorder(s->left);
        printf("%d ",s->data);
        inorder(s->right);
}

int addBTree(struct node* s)
{
        if(s==NULL) return 0;
        return (s->data+ addBTree(s->left)+addBTree(s->right));
}

struct node* newNode(int n)
{
        struct node* s= (struct node*)malloc(sizeof(struct node));
        s->data=n;
        s->left=NULL;
        s->right=NULL;

        return s;
}


struct node* insert(struct node* root,int n)
{
        if(root==NULL) return newNode(n);
        if(n<root->data)
                root->left=insert(root->left,n);
        else if(n>root->data)
                root->right=insert(root->right,n);
        return root;
}

void preorder(struct node* root)
{
        if(root==NULL) return;
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
}

void postorder(struct node* root)
{
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);

}


int main()
{
        int a[10]={1,4,7,2,5,8,3,6,9,10};


        struct node* root=NULL;
        root=insert(root,a[0]);
        for(int i=1; i<10; i++)
        {

                insert(root,a[i]);

        }
        inorder(root);
        printf("\n");
        preorder(root);
        printf("\n");
        postorder(root);
        printf("\nThe sum of all elemnts of binary tree=%d",addBTree(root));
        return 0;
}
