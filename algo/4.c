/*Dutch national flag algorithm*/

/*Sort an array of 0s, 1s and 2s*/

#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
} 


void sort(int a[],int n)
{
	int l=0,m=0,i;
	int h=n-1;
	while(m<=h)
	{
		switch(a[m])
		{
			case 0:
				swap(&a[l++],&a[m++]);
				break;
			case 1:
				m++;
				break;
			case 2:
				swap(&a[m++],&a[h--]);
				break;	
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}




int main()
{
	int i,j,n,a[100];
	printf("\nEnter the no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	
	sort(a,n);
	
}	
	
