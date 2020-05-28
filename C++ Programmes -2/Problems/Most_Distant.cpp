#include<bits/stdc++.h>
#include <climits>
#define debug(x) cout<<x<<" ";
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

float dist(float a,float b)
{
    return sqrt(a*a+b*b);
}

int main()
{
     #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    SPEED;
    int T;
    cin>>T;
    int x,y;
    cin>>x>>y;
    int sx1=x,bx1=x;
    int sy1=y,by1=y;
    T--;
    while(T--)
    {
       cin>>x>>y;
       if(sx1>x) sx1=x;
       if(sy1>y) sy1=y;
       if(bx1<x) bx1=x;
       if(by1<y) by1=y;
    }
    float sx=(float)sx1;
    float sy=(float)sy1;
    float bx=(float)bx1;
    float by=(float)by1;

    debug(sx)
    debug(sy)
    debug(bx)
    debug(by)
    
    float h=dist(sx,sy);
    if(h<dist(sx,bx)) h=dist(sx,bx);
    if(h<dist(sx,by)) h=dist(sx,by);
    if(h<dist(sy,by)) h=dist(sy,by);
    if(h<dist(sy,bx)) h=dist(sy,bx);
    if(h<dist(by,bx)) h=dist(by,bx);
    cout<<h;

    return 0;
}