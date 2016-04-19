/* isomoriphism of a string 
xxy
aab*/

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void isomorphic(string str1,string str2,int n)
{
	int h1[26]={0},h2[26]={0};
	int m1[10]={0},m2[10]={0};
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		m1[i]=++(h1[(int)str1[i]-97]);
		m2[i]=++(h2[(int)str2[i]-97]);
	}
		
	for(i=0;i<n;i++)
	{
		if(m1[i]!=m2[i])
		{
			count=1;
			break;
		}
		
		//cout<<m1[i]<<" "<<m2[i]<<"\n";
	}
	if(count==1)
		cout<<"NO"<<"\n";
	else
		cout<<"Yes"<<"\n";

}

int main()
{
	string str1,str2;
	cout<<"\nEnter the two string:";
	cin>>str1>>str2;
	int len=str1.length();
	isomorphic(str1,str2,len);
}			
	
