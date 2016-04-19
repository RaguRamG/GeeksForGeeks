/* second greatest number in same digit c*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void find(char a[],int n)
{
	int b[10000]={0},i,j,temp=0,count=0,x;
	for(i=n-1;i>0;i--)
	{
		if(a[i-1]<a[i])
		{
			x=i;
			temp=a[i-1];
			a[i-1]=a[n-1];
			a[n-1]=temp;
			
		break;
		}
		else 
			count++;
		
	}
	//--x;
	if(count==n-1)
		printf("not possible\n");
	
	else
	{
		for(i=x;i<n;i++)
		{
			for(j=x;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	printf("%s\n",a);	
			
}


int main()
{
	char a[10];
	int i,j,ans,len;
	printf("\nEnter the number:");
	scanf("%s",a);
	len=strlen(a);
	find(a,len);
}
	
	
