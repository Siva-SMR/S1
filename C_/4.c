/*Linked list*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
struct node *head,*ptr,*newnode,*temp;
	void create();
	void count();
	void search();
	void traverse();
void main()
{
	int n=0,opt;
	while(n!=1)
	{
		printf("1.Insert an element\n");
		printf("2.Count\n");
		printf("3.Search\n");
		printf("4.traverse\n");
		printf("Enter an option\n");
		scanf("%d",&opt);
		switch(opt)
		{	
			case 1:create();
			break;
			case 2:count();
			break;
			case 3:search();
			break;
			case 4:traverse();
			break;
			default:printf("Invalid input");
		}
		printf("Do you want to continue(0/1): ");
		scanf("%d",&n);
	}
}
void create()
{
	int val;
	newnode=(struct node*)malloc(sizeof(struct node));
	
	printf("Enter the data: ");
	scanf("%d",&val);
	newnode->data=val;
	
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->link=newnode;
		temp=newnode;
	}
}
void count()
{
	temp=head;
	int c=0;
	while(temp!=0)
	{
		c++;
		printf("%d\t",temp->data);

		temp=temp->link;
	}
	printf("\nnumber of nodes inside the list: %d\n",c);
}
void search()
{
	temp=head;
	int key,pos=0,flag=0;
	printf("Enter the value to be searched : ");
	scanf("%d",&key);
	while(temp!=0)
	{
		
		pos=pos+1;
		if(temp->data==key)
		{
			printf("%d found at %d\n",key,pos);
			flag=flag+1;
			break;
		}
		temp=temp->link;
	}
	if(flag==0)	
	{
		printf("Data not found in list\n");
	}
}
void traverse()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}


		

	

