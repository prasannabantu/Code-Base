#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node* left, *right;
}st;

void print_array(int *a, int n)
{
  printf("\n");
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

void inOrder(st* root)
{
  if (root == NULL)
    return;
  inOrder(root->left);
  printf("%d ", root->data);
  inOrder(root->right);
}

void preOrder(struct node* root)
{
  if (root == NULL)
    return;
  printf("%d ", root->data);
  preOrder(root->left);
  preOrder(root->right);
}

st* createNode(int data)
{
  st* s = (st*)malloc(sizeof(st));

  s->left = NULL; s->right = NULL; s->data = data; return s;
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

int height(st* root)
{
  if (root == NULL)
    return 0;

  int lheight = height(root->left);
  int rheight = height(root->right);
  if (lheight > rheight)
    return lheight + 1;
  return rheight + 1;
}

void Level_order_Travesral(st* root, int n)
{
  if (root == NULL)
    return;
  if (n > 1)
    {
      Level_order_Travesral(root->left, n - 1);
      Level_order_Travesral(root->right, n - 1);
    }
  else if (n == 1)
    printf("%d ", root->data);
}

void levelOrder(st* root)
{
  int h = height(root);

  for (int i = 1; i <= h; i++)
    Level_order_Travesral(root, i);
}

int main()
{
  int length = 15;
  int a[length];
  int k = -6;

  for (int i = 0; i < length; i++)
    {
      a[i] = abs(k + i);
    }
  print_array(a, length);
//  st* root = insert(NULL, 24);
  st* root = insert(NULL, a[0]);
  for (int i = 1; i < length; i++)
    {
      insert(root, a[i]);
    }
  inOrder(root);
  printf("\n");
  preOrder(root);
  printf("\n");
  levelOrder(root);
  return 0;
}
