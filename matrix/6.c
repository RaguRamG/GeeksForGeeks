#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char ip[10][100];
int pnt[10][100];
char str[100];
int n,i,j;
int check(int count,int r,int len1)
{
	int i,j;
	printf("\n%d %d",count,len1);
	if(count==len1)
	{
		printf("YES");
		printf("The coordinations are:");
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d",pnt[i][j]);
			}
			printf(" ");
		}
	}
	else 
		return;
}		


int dfs(char ip[10][100],int m,int n,int x,int y,int len1)
{
	int i,j=0,k=0,count=0;
	int l,g;
	if(ip[m][n]==str[0])
	{
		printf("%c\n",ip[m][n]);
		printf("%d %d\n",m,n);
		if(i==y-1||j==y-1)
				printf("dei anga venam da");
		else
		{
			for(i=m;i<y;i++)
			{
					if(ip[i][n]==str[k++])
					{
						g=0;
						count++;
						pnt[l][g]=i;
						//printf("pnt[i][j]:%d\n",pnt[l][g]);
						printf("l:%d g:%d\n",l,g);
						g++;
						pnt[l][g]=n++;
						printf("l:%d g:%d\n",l,g);
						l++;
						//printf("count:%d\n",count);	
					}
					//printf("i:%d n\n",count);	
			
			}
		}
		
			for(i=m;i<y;i++)
			{
					if(ip[i][n]==str[k++])
					{
						g=0;
						count++;
						pnt[l][g]=i;
						//printf("pnt[i][j]:%d\n",pnt[l][g]);
						printf("l:%d g:%d\n",l,g);
						g++;
						pnt[l][g]=n++;
						printf("l:%d g:%d\n",l,g);
						l++;
						//printf("count:%d\n",count);	
					}
					//printf("i:%d n\n",count);	
			
			}
			
			//printf("pnt[i][j]:%d\n",pnt[0][0]);
			//printf("count:%d\n",count);
			check(count,x,len1);
			
		}
	}
	else 
		return;
}					







void DFS(char ip[10][100],int x,int y,int len1)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			dfs(ip,i,j,x,y,len1);
			break;
		}
		break;
	}
}
	





int main()
{
	int n,i,j;
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	printf("\nEnter the input string");	
	for(i=0;i<n;i++)
	{
		scanf("%s",ip[i]);
	}
	int len=strlen(ip[0]);
	printf("\nEnter the string:\n");
	scanf("%s",str);
	int len1=strlen(str);
	DFS(ip,n,len,len1);
	
}	
