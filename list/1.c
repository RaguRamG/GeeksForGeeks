#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
	
}list,*head,*temp,*p;





void print()
{
	list *p,*head;
	p=head;
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}
 
void reverse()
{
	list *cur,*pre,*temp,*head,*p;
	pre=head;
	cur=head->next;
	temp=head->next->next;
	pre->next=NULL;
	while(temp!=NULL)
	{
		
		cur->next=pre;
		pre=cur;
		cur=temp;
		temp=temp->next;
	}
	//head=temp;
	p=pre;
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}

void create(int n)
{	
	list *temp,*head,*newnode,*p;
	int i,j,k;
	head=NULL;
	
	for(i=0;i<n;i++)
	{
		newnode=(list*)malloc(sizeof(list));
		newnode->data=i;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	p=head;
	//print();
}


int main()
{
	list *head=NULL,*temp,*p;
	int i,n,j,ele;
	printf("\nEnter the no of elements");
	scanf("%d",&n);
	create(n);
	p=head;
	print();
	reverse();
}
	
