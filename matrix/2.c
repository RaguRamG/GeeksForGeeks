/*
	 0
	101
       21012
*/	




#include<stdio.h>
int main()
{	
	int i,j,k,n;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
		{
			printf(" ");
		}
		for(k=i;k>=0;k--)
		{
			printf("%d",k);
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
