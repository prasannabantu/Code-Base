#include<iostream>
#include<cstring>

using namespace std;


int main(){
    
    int total=26;
    int a[total];
    for(int i=0;i<total;i++) cin>>a[i];
    char s[11];
    cin>>s;
   // cout<<s;
    int size=strlen(s);
    int temp;

    int big=0;
    for(int i=0;i<size;i++)  
    {
        temp=a[(int)(s[i]-97)];
        if(temp>big) big=temp;
    }
    cout<<big*size;
        

} 