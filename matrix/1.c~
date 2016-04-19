/* spiral form*/

#include<stdio.h>

int main()
{
	int i,j=0,size,c,r,a[50];
	int b[10][10]={0};

	printf("\nEnter the no of elements you want to spiral");
	scanf("%d",&size);
	printf("\nEnter the elements you want spiral");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the no of row and columns");
	scanf("%d%d",&r,&c);
	int x=c;
	int y=r;
	int m=0,n=0,g=0;
	while(m<r && m<c)
	{
		for(i=m;i<c;i++)
		{
			b[m][i]=a[g++];
		}
		m++;
		for(i=m;i<c;i++)
		{
			b[i][c-1]=a[g++];
		}
		c--;
		for(i=c-1;i>=n;i--)
		{
			b[r-1][i]=a[g++];
		}
		r--;
		for(i=r-1;i>=m;i--)
		{
			b[i][n]=a[g++];
		}
		n++;
	}	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}	
	
	
