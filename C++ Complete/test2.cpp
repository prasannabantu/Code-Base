#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n;
        scanf("%d",&n);
        int x;
        int y;
        int maxx=INT_MIN;
        int minx= INT_MAX;
        int maxy=INT_MIN;
        int miny= INT_MAX;
        for(int i=0; i<n; i++)
        {
                scanf("%d",&x);
                scanf("%d",&y);
                if(x==0)
                {
                        if(y>maxy)
                                maxy=y;
                        if(y<miny)
                                miny=y;
                }

                if(y==0)
                {
                        if(x>maxx)
                                maxx=x;
                        if(x<minx)
                                minx=x;
                }
                // cout<<endl;
                // cout<<maxx<<endl;
                // cout<<minx<<endl;
                // cout<<maxy<<endl;
                // cout<<miny<<endl;
                // cout<<endl;


        }

        float maxlen=0.0;
        float xlen=(float)(maxx-minx);
        //  cout<<xlen<<" = ";
        if(maxlen<xlen) maxlen=xlen;
        float ylen=(float)(maxy-miny);
        //  cout<<ylen<<" = ";
        if(maxlen<ylen) maxlen=ylen;
        float xylen=sqrt((maxx*maxx)+(maxy*maxy));

        if(maxlen<xylen) maxlen=xylen;
        float xylenmin=sqrt((minx*minx)+(miny*miny));

        if(maxlen<xylenmin) maxlen=(float)xylenmin;
        cout<<maxlen;
        return 0;
}
