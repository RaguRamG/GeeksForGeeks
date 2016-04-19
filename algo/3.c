/*quick sort implementation*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int partition(int a[],int start,int end)
{
	int pivot=a[end];
	int pindex=start;
	int temp,i,j;
	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;
			
			pindex++;
		}
	} 
	temp=a[end];
	a[end]=a[pindex];
	a[pindex]=temp;
	return pindex;
}
			
void quicksort(int a[],int start,int end)
{
	if(start<end)
	{
		int pivot=partition(a,start,end);
		quicksort(a,start,pivot-1);
		quicksort(a,pivot+1,end);
	}
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
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}



