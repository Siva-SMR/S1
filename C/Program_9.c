//circularqueue

#include<stdio.h>
#include<stdlib.h>

#define n 3

int front=-1, rear=-1;
int array[n];

void insert();
void delete();
void peek();
void display();

void main()
{
	int opt,s=0;
	while(s==0)
	{
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.peek\n");
		printf("4.display\n");
		printf("Enter an option\n");
		scanf("%d",&opt);
		
		switch(opt)
		{
			case 1:insert();
			break;
			case 2:delete();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
			default:printf("Invalid input");
		}
		printf("Do you want to continue(0/1)");
		scanf("%d",&s);
	}	
}
void insert()
{
	int num;
	
	printf("Enter the data ");
	scanf("%d",&num);
	
	if(front==0&&rear==n-1)
	{
		printf("overflow");
	}
	else
	{
		if(front==-1&&rear==-1)
		{
			
			front=rear=0;
			array[rear]=num;
		}
		else if(rear==n-1&&front!=0)
		{
			rear=0;
			array[rear]=num;
		}
		else
		{
			rear=rear+1;	
			array[rear]=num;
		}
	}
	
}

void delete()
{
	int num;
	if(front==-1)
	{
		printf("underflow");
	}
	else
	{
		if(front==rear)
		{
			num=array[front];
			front=rear=-1;
		}
		else if(front==n-1)
		{
			num=array[front];
			front=0;	
		}
		else
		{
			num=array[front];
			front=front+1;
		}
	printf("Node deleted %d",num);
	}
}
void peek()
{
	if(front==-1)
	{
		printf("Empty queue");
	}
	else
	{
		printf("%d",array[front]);
	}
}
void display()
{
	int i;
	if((front==-1)&&(rear==-1))
	{
		printf("Empty queue");
	}
	else
	{
		if(front<rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d\t",array[i]);
			} 
		}
		else if((front==rear))
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d\t",array[i]);
			}
		}
		else
		{
			
			for (i=0;i<=rear;i++)
			{
				printf("%d\t", array[i]);
			}
			for (i=front;i<n;i++)
			{
				printf("%d\t", array[i]);
			}
		}
	}
}


