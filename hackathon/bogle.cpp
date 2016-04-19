#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;


char str[100];
char a[10][10];
int n,len;
int vis[10][10]={0};


int dfs(int i,int j,int x)
{
	vis[i][j]=1;
	int k,m;
	//ans[x]=a[i][j];
	//if(strcmp(ans,str)==0)
		//cout<<"yes";

	cout<<i<<" "<<j<<" " << x <<"\n";
	if(x==len-1)
		cout<<"yes";
	x++;
	for(k=-1;k<=1;k++)
	{
		for(m=-1;m<=1;m++)
		{
			if((i+k)>=0 && (i+k)<n && (j+m)>=0  && (j+m)<n)
			{
				//cout<<" " << x <<"\n";
				if(  !vis[i+k][j+m] && a[i+k][j+m]==str[x])
				{
					//cout<<i+k<<" "<<j+m<<" " << x <<"\n";
					dfs(i+k,j+m,x);
					
				}
			}		
		}
	}
	
			

}	


void isbogle()
{
	int i,j;
	char ans[100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			int x=0;
			if(a[i][j]==str[0])
			{
				//cout<<i<<" "<<j<<len<<"\n";
				dfs(i,j,x);
			}
		}
	}
}


int main()
{
	int i,j;
	cout<<"\nEnter the no of string:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the input string:";
	cin>>str;
	len=strlen(str);
	isbogle();
}	
	
