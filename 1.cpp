#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	char str[]="this is thevdiya corporation";
	int len=strlen(str);
	//cout<<len<<"\n";
	char a[100][100];
	int m=0,i,n=0;
	for(i=0;i<len;i++)
	{
		if(!isspace(str[i]))
		{
			a[m][n++]=str[i];
		}
		if(isspace(str[i]))
		{
			m++;
			n=0;
		}
	}
	for(i=m;i>=0;i--)	
	{
		cout<<a[i]<<" ";
	}
}
