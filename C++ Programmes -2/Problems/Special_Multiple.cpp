#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#define debug(i) cout<<i<<" ";
#define ll unsigned long long
using namespace std;


string getBinary(ll n)
{
  //if(n==0) return (string)'0';
  string a="";
  while(n>0)
  {
    char c=(char)(n%2+48);
    n=n/2;
    a=a+c;
  }
  reverse(a.begin(),a.end());
  
  return a;
}

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
      ll n;
      cin>>n;
      ll number=n+1;
      ll count=1;

      while(1)
      {
         string binary=getBinary(count++);
         number=(ll) stoi(binary)*9;
         if(number%n==0) break;
      }
      cout<<number<<"\n";
    }


   

  
} 