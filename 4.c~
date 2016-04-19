
/*anagram of a string*/

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char str[10][10]={"toy","dogm","cat"};
	int h[26]={0},i,j,k,count;
	char a[10];
	printf("\nEnter the string:" );
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		h[(int)a[i]-97]++;
	}
	i=0;
	while(i<3)
		{
		count=0;
		int h1[26]={0};
		int m=0;
		for(j=0;j<strlen(str[i]);j++)
		{
			h1[(int)str[i][j]-97]++;
		}
		//printf("asd");		
		for(k=0;k<26;k++)
		{
			m=abs(h[k]-h1[k]);
			if(m!=0)
				count++;
		}
		if(count==0)
		{
			printf("it is anagram");
			break;
		}		
		i++;
		}	
		if(count!=0)
			printf("not anagram");
}
