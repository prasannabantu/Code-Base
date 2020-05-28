#include<iostream>
#define debug(i) cout<<i<<" ";
using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int count=0;

    for(int i=0;i<n-1;i=i+2,count++)
     if(a[i]==1) i=i-1; 
    
    cout<<count;
    
}