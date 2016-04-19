/*
	1 2 3        
	4 5 6
	7 8 9
*/

/*
	1
	4 2
	7 5 3
	8 6
	9
*/	


#include<stdio.h>
#include<stdlib.h>
void diagonal(int a[10][10],int r,int c)
{
	int b[100][100]={0};
	int m=0,n=0,i,j,t,k,x=0;
	while(m<c && n<c)
	{
		t=x;
		for(i=0;i<r;i++)
		{
			b[t++][n]=a[i][n];              
													
		}
		n++;
		for(j=n;j<c;j++)
		{
			b[t++][m]=a[r-1][j];
		}
		m++;
		x++;
		r--;
	}
	printf("\n");
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			if(b[i][j]!=0)
			{
				printf("%d ",b[i][j]);
			}
		}
		printf("\n");
	}
}

int main()
{	
	int r,c,i,j,a[10][10];
	printf("\nEnter the no of rows and coluns:");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		} 
	}
	diagonal(a,r,c);
}
