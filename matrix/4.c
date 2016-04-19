#include<stdio.h>
int main()
{
	int  a[10][10],b[10][10],c[10][10]={0},i,j,k=0,r,n,cl;
	printf("\nEnter the number:");
	scanf("%d %d",&r,&cl);
	printf("\nEnter the numbers:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<cl;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the numbers:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<cl;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(k=0;k<r;k++)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<cl;j++)
			{
				c[k][i]+=a[k][j]*b[j][i];
			}
		}
		
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<cl;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
