#include<iostream>
#define debug(i) cout<<i<<" ";
using namespace std;


int main(){
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int T;
   cin>>T;
   while(T--)
   {
       int n,m,s;
       cin>>m>>n;
       if(m==n)
       {
        if(m==1||m==2) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
       }
       else cout<<"YES"<<"\n";


   }

  
} 