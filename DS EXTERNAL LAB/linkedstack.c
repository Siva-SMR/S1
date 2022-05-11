//linked stack

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *top=NULL;
void push();
void pop();
void display();

void main()
{
	int value,n=0;
	while(n!=1)
	{
		printf("\n1.Push\n2.Pop\n3.Display\nEnter your choice:");
		scanf("%d",&value);
		switch(value)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			default:printf("Invalid input");
			break;
		}
		printf("\nDo you want to continue:");
		scanf("%d",&n);
	}
}

void push()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&temp->data);
	temp->link=top;
	top=temp;
    	printf("\nData inserted is %d",temp->data);
}

void pop()
{
	if(top==NULL)
    	{
		printf("\nStack is empty!");
    	}
    	else
    	{
		struct node *temp;
		temp=top;
        	top=temp->link;
        	temp->link=NULL;
        	printf("\nDeleted data is %d",temp->data);
        	free(temp);
    	}
}

void display()
{
	if(top==NULL)
    	{
		printf("\nStack is empty!");
    	}
    	else
    	{
        	struct node *temp;
        	temp=top;
        	while(temp!=NULL)
        	{
            	printf("\n%d",temp->data);
            	temp=temp->link;
        	}
    	}
}
