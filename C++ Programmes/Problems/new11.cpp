#include<iostream>

using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int temp;
    
    int count0=0;
    int count1=0;
    int T=n;

    while(T--)
    {
        cin>>temp;
    if(temp==0)
        count0++;
    else
        count1++;
}
    cout<<n-count0/2-count1;
  
} 