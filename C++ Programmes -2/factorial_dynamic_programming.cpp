#include<bits/stdc++.h>
#define debug(x) cout<<x<<" ";
#define debug2(x,y) cout<<x<<" "<<y<<" ";
#define result(x) cout<<x<<"\n";
#define rep(i,s,e) for(int i=s;i<=e;i++)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define eps 0.00001
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define N 10
using namespace std;


int fact[N];

int factorial(int n)
{
    if(n==1||n==0) return 1;
    if(fact[n]==0) fact[n]=n*factorial(n-1);
    debug(n)
    return fact[n];
}


int main()
{
    int n; 
    cin>>n;
    debug(n)
  //  cout<<factorial(n);
    

    
    for(int i=0;i<N;i++)
    {
        fact[i]=0;
    }
    

    return 0;
}