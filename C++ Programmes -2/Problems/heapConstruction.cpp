#include <bits/stdc++.h> 
using namespace std; 
  

int main () 
{
	priority_queue<int> pq;
	int T;
	while(T--)
	{
		int c,n;
		cin>>c;
		if(c==1||c==2) cin>>n;
		
	pq.push(5);
	pq.push(12);

	while(pq.empty()==false)
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
}
	return 0;
} 