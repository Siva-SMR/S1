/*Linked stack*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
struct node *head,*ptr,*newnode,*temp,*preptr;
	void insert();
	void delete();
	void display();
void main()
{
	int n=0,opt;
	head=(struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	while(n!=1)
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("Enter an option\n");
		scanf("%d",&opt);
		switch(opt)
		{	
			case 1:insert();
			break;
			case 2:delete();
			break;
			case 3:display();
			break;
			default:printf("Invalid input");
		}
		printf("Do you want to continue(0/1): ");
		scanf("%d",&n);
	}
}

void insert()
{
	int val;
	ptr=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data ");
	scanf("%d",&val);
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	newnode->data=val;
	newnode->link=ptr->link;	
	ptr->link=newnode;
}

void delete()
{
	ptr=head;
	if(head->link==NULL)
	{
		printf("\nUnderflow\n");
	}
	else
	{
		while(ptr->link!=NULL)
		{
			preptr=ptr;
			ptr=ptr->link;
		}
		preptr->link=ptr->link;
		printf("Data of data deleted %d\n",ptr->data);
		free(ptr);		
	}
}

void display()
{
	temp=head;
	if(head->link==NULL)
	{
		printf("\nUnderflow\n");
	}
	while(temp->link!=NULL)
	{
		temp=temp->link;
		printf("%d\t",temp->data);
	}
	printf("\n");
}
