#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct chain
{
	int a;
	int b;
}a[10];


typedef chain chain;
void fsort(chain a[],int n)
{
	int i,j;
	int t1,t2;
	for(i=0;i<n-1;i++)
	{	
		for(j=i+1;j<n;j++)
		{
			if(a[i].a > a[j].a)
			{
				t1=a[i].a;
				t2=a[i].b;
				a[i].a=a[j].a;
				a[i].b=a[j].b;
				a[j].a=t1;
				a[j].b=t2;	
			}
		}
	}
	
	for(i=0;i<n;i++)
	{	
		cout<<a[i].a<<" " <<a[i].b<<"\n";
	}
		
}

void maxchain(chain arr[],int n)
{
	int max[50]={1};
	int i,j;
	for(i=0;i<n-1;i++)
	{	
		int h=a[i].b;
		for(j=i+1;j<n;j++)
		{
			//cout<<" "<<h;
			//cout<<" "<<a[j].a;
			if(h<a[j].a)
			{	
				//cout<<" "<<h;
				h=a[j].b;
				max[i]++;
			}
		}
	}
int m=0;
for(i=0;i<n;i++)
{
cout<<" "<<max[i];
	
	if(max[i]>m)
		m=max[i];
}
cout<<"\n"<<m<<"\n";
		
}


int main()
{
	int i,j,n;
	cout<<"\nEnter the no of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i].a>>a[i].b;
	}
	/*for(i=0;i<n;i++)
	{
		cout<<a[i].a<<" "<<a[i].b<<"\n";
	}*/
	fsort(a,n);
	maxchain(a,n);
}	
