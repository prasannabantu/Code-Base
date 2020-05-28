#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>



typedef struct node {
  int data;
  struct node *left, *right;
}st;

void Level_order_Travesral(st* root, int n);

st* newNode(int data)
{
  st* s = (st*)malloc(sizeof(st*));

  s->left = NULL; s->right = NULL; s->data = data;
  return s;
}

st* insert(st* root, int data)
{
  if (root == NULL)
    return newNode(data);
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
  printf("%d ", root->data);
  inOrder(root->right);
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

void Levelorder(st* root)
{
  printf("\n");
  int h = height(root);
  for (int i = 1; i <= h; i++)
    Level_order_Travesral(root, i);
}

void preOrder(struct node* root)
{
  if (root == NULL)
    return;
  printf("%d ", root->data);
  preOrder(root->left);
  preOrder(root->right);
}

void Level_order_Travesral(st* root, int n)
{
  if (root == NULL)
    return;
  else if (n == 1)
    printf("%d ", root->data);
  else if (n > 1)
    {
      Level_order_Travesral(root->left, n - 1);
      Level_order_Travesral(root->right, n - 1);
    }
}

int main()
{
  st* root = insert(NULL, 25);
  int length = 10;
  int arr[length];

  for (int i = 0; i < length; i++)
    {
      arr[i] = rand() % 25;
      insert(root, arr[i]);
    }
  print_array(arr, length);
  inOrder(root);
  Levelorder(root);
  printf("\n");
  preOrder(root);




  return 0;
}
