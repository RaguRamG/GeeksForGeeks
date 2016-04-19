#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int i;
	int h[26]={0};
	cin>>str;
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		h[(int)str[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(h[i]!=0)
		{
			printf("%c - %d \n",i+97,h[i]);
		}
	}
}
