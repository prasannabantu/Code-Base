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
#define N 11

using namespace std;

/*vector<int> nCrTable(n,0);

int nCr(int n,int r)
{
    if(r==n||r==0) return 1;
    if(nCrTable[r]==0)
        nCrTable[r]= nCr(n-1,r-1)+nCr(n-1,r);
    else return nCrTable[n];
    
    if(r==n||r==0) return 1;
    
}*/


//vector<int>fact(n,0);
int fact[N];
memset(fact,0,N*4);

int factorial(int n)
{
    if(n==1) 
        {
            return 1; fact[n]=1;}
    if(fact[n]==0) fact[n]=n*fact[n-1];
    return fact[n];
    
}

int solve()
{
   int n,r;
   cin>>n>>r;
  // return nCr(n,r);
  // rep(i,1,n) result(factorial(i))
   return factorial(n);
}


int main()
{
    SPEED;

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
      cout<<solve()<<"\n";
    }
    return 0;
}