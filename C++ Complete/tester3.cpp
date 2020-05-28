#include <iostream>
#include <string>

using namespace std;

int toNumber(char c)
{
        return c-'0';
}

void doer(int caseCount)
{
        string s;
        cin>>s;
        int string_length=s.length();



        int truncstr[100];
        int trunckpoint=0;
        int stpoint=0;
        int count=0;
        int num=toNumber(s[stpoint]);


        while(stpoint<string_length)
        {
                count=0;
                num=toNumber(s[stpoint]);

                if(num==0)
                {
                        truncstr[trunckpoint++]=0;
                        stpoint++;
                }
                if(num==1)
                {

                        while(s[stpoint]=='1')
                        {
                                count++; stpoint++;
                        }
                        truncstr[trunckpoint++]=count;
                }
        }

        cout<<"Case #"<<caseCount<<": ";
        for(int i=0; i<trunckpoint; i++)
        {
                if(truncstr[i]==0) cout<<0;
                else
                {
                        cout<<"(";
                        for(int j=0; j<truncstr[i]; j++) cout<<"1";
                        cout<<")";
                }

        }
        cout<<endl;
}

int main()
{
        ios_base::sync_with_stdio(false);
        int T,caseCount=1;
        scanf("%d",&T);
        while(caseCount<=T)
        {

                doer(caseCount);
                caseCount++;

        }


        return 0;
}
