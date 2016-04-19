/*merge sort
time complexity O(nlogn)
space complexiy O(n)*/


#include<stdio.h>
#include<stdlib.h>
void merge(int left[],int right[],int a[],int mid,int x)
{
	int i=0,j=0,k=0;
	//int mid=sizeof(left)/sizeof(left[0]);
	//int x=sizeof(right)/sizeof(right[0]);
	while(i<mid && j<x )
	{
		if(left[i]<=right[j])
		{
			a[k++]=left[i];
			i++;
		}
		else
		{
			a[k++]=right[j];
			j++;
		}
	}
	while(i<mid)
	{
		a[k++]=left[i];
		i++;
	}
	while(j<x)
	{
		a[k++]=right[j];
		j++;
	}
	
}
void mergesort(int a[],int n)
{
	int i,j,k,l=0;
	if(n<2)
		return;	
	int mid=n/2;
	int x=n-mid;
	int left[mid];
	int right[x];
	for(i=0;i<mid;i++)
	{
		left[i]=a[i];
	}
	for(j=mid;j<n;j++)
	{
		right[l++]=a[j];
	}
	mergesort(left,mid);
	mergesort(right,x);
	merge(left,right,a,mid,x);
}	
	

int main()
{
	int a[10],n,i,x;
	printf("\nEnter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}	
	mergesort(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

