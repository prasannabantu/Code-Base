#include<iostream>
#define debug(i) cout<<i<<" ";

using namespace std;

void readMatrix(char **a,int n)
{
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cin>>a[i][j];
}

void printMatrix(char **a,int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
      cout<<a[i][j]<<" ";
    cout<<"\n";
  }
}


int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

  int n;
  cin>>n;
  char *a[n];
  for(int i=0;i<n;i++) a[i]=(char*)malloc(sizeof(char)*n);

     readMatrix(a,n);
     printMatrix(a,n);

}