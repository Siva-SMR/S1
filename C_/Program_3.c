/*Queue*/
#include<stdio.h>	
#define n 5
int queue[n],front=-1,rear=-1; 	
void insert();
void delete();
void peek();
void display();
void main()
{
int opt,val=1;
while(val==1)
{
	printf("Enter any of the below options \n1.Insert \n2.Delete \n3.Peek \n4.Display\n ");
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
default:printf("Invalid entry");
}
	printf("Do you want to continue(0/1)\n");
	scanf("%d",&val);
}
}
void insert()
{
int x;
	printf("Enter an element to insert");
	scanf("%d", &x);
if(rear==n-1)
{
	printf("overflow");
}
else if(front==-1 && rear==-1)
{
	front=rear=0;
}
else
{
	rear++;
}
	queue[rear]=x;
}
void delete()
{
if(front==-1 || front>rear)
{
	printf("underflow");
}
else
{
	printf("Deleted element is %d", queue[front]);
	front++;
if(front>rear)
{
	front=rear=-1;
}
}
}
void peek()
{
if(front==-1 || front>rear)
{
	printf("Underflow");
}
else
{
	printf("Peek element is %d",queue[front]);
}
}
void display()
{
	int i;
	if(front==-1 || front>rear)
	{
		printf("underflow");
	}
	else
	{
		printf("front");  	
		printf("element in the queue are\n");
		for (int i=front;i<=rear;i++)
		{
			printf("%d\n", queue[i]);
		}
	}
}

