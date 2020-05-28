#include<bits/stdc++.h>
#define debug(x) cout<<x<<" ";
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

string solve(){
        string Y="YES";
        string N="NO";
        int n;
        cin>>n;
        int a[n];
        cin>>a[0];
        if(n==1) return N;
        
        cin>>a[1];
        int maingcd=gcd(a[0],a[1]);

        for(int i=2;i<n;i++) 
        {
            cin>>a[i];
            maingcd=gcd(maingcd,a[i]);
        }
        if(maingcd!=1) return N;
        return Y;
        
        

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