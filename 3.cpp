#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int a[100];
int i;
void func(int n)
{
 int x;
	if(n)
	{
		 x=n%2;
		n=n/2;
		func(n);
		a[i++]=~x;
	}
	else 
		return;
}
			
int main()
{
	int j,n;
	int b;
	cin>>n;
	func(n);
	for(j=0;j<i;j++)
		cout<<a[i];
}

