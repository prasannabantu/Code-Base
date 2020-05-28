int binarySearch(int *a,int n,int data)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(a[m]==data) return m;
        if(a[m]<data) l=m+1;
        else r=m-1;
    }
    return -1;
}

int isXaSquare(int n)
{
    int l=0, r=n/2+1;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(m*m==n) return m;
        if(m*m<n) l=m+1;
        else r=m-1;
    }
    return -1;
}


int firstValueGreaterThanEqualToX(int *a,int n,int target)
{
    int l=0; int r=n-1;
    int ans=-1;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(a[m]>=target)
        {
            ans=m; r=m-1;
        }
        else  l=m+1;
    }
    return ans;
}


