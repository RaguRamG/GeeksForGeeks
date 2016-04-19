#include<stdio.h>
int main()
{
	int i,j,n,x,a[100][100];
	printf("enter the number");
	scanf("%d",&n);
	int t=(2*n)-1;
	int r=0,m;
	x=t;
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(r==i || j==t-1)
				a[i][j]=n;
		}
		n--;
		t--;
		r++;
	}	
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
