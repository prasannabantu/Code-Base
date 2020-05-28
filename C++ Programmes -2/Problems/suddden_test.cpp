#include<bits/stdc++.h>
#define debug(x) cout<<x<<" ";
#define debug2(x,y) cout<<x<<" "<<y<<" ";
#define rep(i,s,e) for(int i=s;i<=e;i++)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define sqr(x) ((x)*(x))
#define eps 0.00001
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

struct point
{
    int x;
    int y;
    int z;
    int ax;
    int ay;
    int az;
};

float dist(point p,point q)
{
    return sqrt(sqr(p.x-q.x)+sqr(p.y-q.y)+sqr(p.z-q.z));
}

void update(point p)
{
    p.x+=p.ax;
    p.y+=p.ay;
    p.z+=p.az;
    debug2(p.x,p.y)
}

string solve()
{
   string Y="YES";
   string N="NO";
   int r1,r2;
   cin>>r1>>r2;
   debug2(r1,r2)
   point p,q;
   cin>>p.x>>p.y>>p.z>>p.ax>>p.ay>>p.az;
   cin>>q.x>>q.y>>q.z>>q.ax>>q.ay>>q.az;
   float dist1=dist(p,q);
   update(p); update(q);
   float dist2=dist(p,q);
   debug2(dist1,dist2)
   if(dist2>dist1) return N;
  // dist1=dist2;
    while(1)
   {
       if(dist2<r1+r2) return Y;
       dist1=dist(p,q);
       update(p); update(q);
       dist2=dist(p,q);
       if(dist2>dist1) return N;
   }
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
    debug(T)
    while(T--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}