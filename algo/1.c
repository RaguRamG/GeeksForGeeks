/*binary search*/
#include<stdio.h>

void binsearch(int a[],int n,int x)
{
	int s=0,l=n-1,mid,ans;
	
	while(s<=l)
	{
		//printf("asd");
		mid=(s+l)/2;
		if(a[mid]==x)
		{
			ans=x;
			break;
		}
		else if(x<a[mid])
			l=mid-1;
		else 
			s=mid+1;
	}
	if(ans==x)
		printf("\nElement is present");
	else
		printf("\nElement is not present");
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
	printf("\nEnter the element to  search:");
	scanf("%d",&x);
	binsearch(a,n,x);
}
	
	
