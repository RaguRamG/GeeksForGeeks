#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int a[5][5]={{1,1,0,0,0},
		     {0,1,0,0,1},
		     {1,0,0,1,1},
		     {1,0,0,0,0},
		     {1,0,1,0,1}
		    };

int vis[5][5]={0};


void island(int i,int j)
{
	
	vis[i][j]=1;
	int k,m;
	for(k=-1;k<=1;k++)
	{
		for(m=-1;m<=1;m++)
		{
			if((i+k)>=0 && (i+k)<5 && (j+m)>=0  && (j+m)<5)
			{
				if(a[i+k][j+m] && !vis[i+k][j+m])
				{
					island(i+k,j+m);
				}
			}		
		}
	}
}





int main()
{
	int count=0,i,j;
	//int vis[5][5]={0};
 		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j] && !vis[i][j])
			{
				
				island(i,j);
				count++;	
			}
		}
	}
	cout<<count;
}
	
