#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	int a[10][10];
	int b[10][10]={0};
	int i,j,n;
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{	n=2;
		for(j=0;j<3;j++)
		{
			b[i][j]=a[n--][i];
		}
	}

	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
}
