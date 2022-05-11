//doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *link;
};

struct node *head,*ptr,*newnode,*temp,*data,*preptr;

	void insert();
	void in_pos();
	void in_end();
	void delete();
	void del_pos();
	void del_end();
	void display();

void main()

{
	int n=0,opt;
	head=(struct node*)malloc(sizeof(struct node));
	head->link=0;
	
	while(n!=1)
	{
		printf("1.Insert\n");
		printf("2.Insert after a position\n");
		printf("3.Insert at end\n");
		printf("4.Delete\n");
		printf("5.Delete after a position\n");
		printf("6.Delete at end\n");
		printf("7.Display\n");
		printf("Enter an option\n");
		scanf("%d",&opt);
		
		switch(opt)
		{	
			case 1:insert();
			break;
			case 2:in_pos();
			break;
			case 3:in_end();
			break;
			case 4:delete();
			break;
			case 5:del_pos();
			break;
			case 6:del_end();
			break;
			case 7:display();
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
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data ");
	scanf("%d",&val);
	
	newnode->data=val;
	newnode->prev=head;
	newnode->link=head->link;
	head->link=newnode;
	
}

void in_pos()

{
	int val,pos;
	ptr=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data of node after which newnode to be created ");
	scanf("%d",&pos);
	printf("Enter the data ");
	scanf("%d",&val);

	while (ptr->data!=pos)
	{
		ptr=ptr->link;
	}

	newnode->data=val;
	newnode->link=ptr->link;
	newnode->prev=ptr;
	ptr->link=newnode;
	ptr->link->prev=newnode;
}

void in_end()

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
	newnode->link=NULL;
	
	ptr->link=newnode;
	newnode->prev=ptr;
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
		ptr=ptr->link;
		head->link=ptr->link;
		printf("Data of node deleted : %d\n",ptr->data);
		free(ptr);
	}
}

void del_pos()
{
	int val;
	ptr=head;
	printf("Enter data of node after which node has to be deleted ");
	scanf("%d",&val);
	while (ptr->data!=val)
	{
		ptr=ptr->link;
		
	}
	temp=ptr;
	ptr=ptr->link;
	if(ptr->link!=NULL)
	{
		ptr->link->prev=temp;
	}
	
	temp->link=ptr->link;
	printf("Data of data deleted %d\n",ptr->data);
	free(ptr);
}

void del_end()
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
			
			ptr=ptr->link;
		}
		
	ptr->prev->link=ptr->link;
		
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


