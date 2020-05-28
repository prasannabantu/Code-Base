#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *left, *right;
}st;

st* createNode(int data)
{
  st* s = (st*)malloc(sizeof(st));

  s->data = data; s->left = NULL; s->right = NULL; return s;
}


st* insert(st* root, int data)
{
  if (root == NULL)
    return createNode(data);
  if (data < root->data)
    root->left = insert(root->left, data);
  else if (data > root->data)
    root->right = insert(root->right, data);
  return root;
}

void print_array(int *a, int n)
{
  printf("\n");
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}


void inOrder(struct node* root)
{
  if (root == NULL)
    return;
  inOrder(root->left);
  printf("address=%p data=%d\n", root, root->data);
  inOrder(root->right);
}

st* searchTree(st* root, int data)
{
  if (data == root->data)
    return root;
  if (data < root->data)
    return searchTree(root->left, data);
  if (data > root->data)
    return searchTree(root->right, data);
}

st* lca(st* root, int n1, int n2)
{
  if (root->data == n1 || root->data == n2)
    return root;
  if (root == NULL)
    return NULL;
  st* left = lca(root->left, n1, n2);
  st* right = lca(root->right, n1, n2);
}

int main()
{
  int height = 10;
  int arr[] = { 6, 5, 7, 4, 8, 3, 9, 2, 0, 1 };

/*
   for (int i = 0; i < height; i++)
    {
      arr[i] = rand() % 101;
    }
 */

  print_array(arr, height);
  st* root = insert(NULL, arr[0]);
  for (int i = 1; i < height; i++)
    {
      insert(root, arr[i]);
    }
  inOrder(root);
  st* l = (st*)searchTree(root, 5);
  printf("%d", l->data);
  return 0;
}
