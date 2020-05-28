#include<iostream>

using namespace std;

bool isBoxFilled(int a[9][9],int i,int j);
bool isHorFilled(int a[9][9],int h,int num);
bool isVerFilled(int a[9][9],int v,int num);

bool sudokoSolve()
{
   return false; 
}

void fillSudoko(int a[9][9])
{
	 for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		   {
		   	for(int k=1;k<=9;k++)
		   	{
                
		   	}
		   }
	}
	
}

void fillBox(int a[9][9],int i,int j,int num)
{
	if(!isBoxFilled(a,i,j,num))
	{
		
			bool h=isHorFilled(a,h,num);
			bool v=isVerFilled(a,v,num);
			bool b=isSqFilled(a,i,j,num);
			if(h||v||b) a[i][j]=0;
			else a[i][j]=num;
		
	}
}

void showSudoko(int a[9][9])
{
    for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
			{
			    cout<<a[i][j]<<" ";
			}
			cout<<"\n";
	}
}

bool isSqFilled(int a[9][9],int i,int j,int num)
{
	return false;
}

bool isBoxFilled(int a[9][9],int i,int j)
{
   if(a[i][j]==0) return false;
   return true;
}

bool isHorFilled(int a[9][9],int h,int num)
{
    for(int j=0;j<9;j++)
    	if(num==a[h][j]) return true;
    		return false;
}

bool isVerFilled(int a[9][9],int v,int num)
{
    for(int i=0;i<9;i++)
    	if(num==a[i][v]) return true;
    		return false;
}


int main()
{

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
	int a[9][9];
	int temp;

	for(int i=0;i<9;i++)
	{
		scanf("%d",&temp);
		for(int j=8;j>=0;j--){
		a[i][j]=temp%10;
		temp=temp/10;
		}
	}
	
	fillSudoko(a);
			
	showSudoko(a);
	return 0;
}