#include<iostream>
#define debug(i) cout<<i<<" ";
#include<vector>
#include<bits/stdc++.h>
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
       int n,k;
       cin>>n>>k;
       int count=0,temp;
       for(int i=0;i<n;i++)
       {
        cin>>temp;
        if(temp<=0) count++;
       }

        count<k ? cout<<"YES" : cout<<"NO";
        cout<<"\n";

   }
 return 0;
} 