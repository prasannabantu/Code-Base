#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data; struct node *left, *right;
}st;

struct node* createNode(int data)
{
  struct node* temp = (struct node*)malloc(sizeof(struct node));

  temp->left = NULL; temp->right = NULL; temp->data = data; return temp;
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

st* lca(st* root, int data1, int data2)
{
  if (root == NULL)
    return NULL;

  if (root->data == data1 || root->data == data2)
    return root;

  st* leftadd = lca(root->left, data1, data2);
  st* rightadd = lca(root->right, data1, data2);

  if (leftadd != NULL && rightadd != NULL)
    return root;
  return (leftadd != NULL) ? leftadd : rightadd;
}

void print_array(int *a, int n)
{
  printf("\n");
  for (int i = 0; i < n; i++)
    {
      printf("%d ", a[i]);
    }
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
void preOrder(struct node* root)
{
  if (root == NULL)
    return;
  printf("%d ", root->data);
  preOrder(root->left);
  preOrder(root->right);
}


int main()
{
  int len_array = 10;

  int arr[] = { 5, 8, 3, 4, 2, 7, 9, 6, 10, 1 };
  st* root = insert(NULL, arr[0]);

  for (int i = 1; i < len_array; i++)
    {
      insert(root, arr[i]);
    }
  print_array(arr, len_array);
  printf("\n");
  inOrder(root);
  printf("\n");

  preOrder(root);
  printf("\n");
  st* l = lca(root, 7, 10);
  printf("%d\n", l->data);
  l = lca(root, 5, 10);
  printf("%d\n", l->data);
  l = lca(root, 4, 6);
  printf("%d", l->data);

  return 0;
}
