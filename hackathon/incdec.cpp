/*first increasing and decreasing number */

#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;


void bsearch(int a[],int n)
{
	int i,j;
	i=0;
	j=n-1;
	while(i<=j)
	{
		int mid=(i+j)/2;
		if(a[mid-1] < a[mid] && a[mid]>a[mid+1] || i==j)
		{
			cout<<a[mid]<<"\n";
			break;
		}
		else if(a[mid-1] > a[mid] && a[mid]>a[mid+1] )
		{
			j=mid-1;
		}
		else
		{	
			i=mid+1;
		}
	}
}		





int main()
{
	int a[100],i,n;
	cout<<"\nEnter the no of elements:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bsearch(a,n);	
}
