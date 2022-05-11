/*Stack*/
#include<stdio.h>
#define n 5
int t=-1, stack[n];
void push()
{
int x;
	printf("\nEnter data\n");
	scanf("%d",&x);
if(t==n-1)
{
	printf("\nOverflow");
}
else
{
	t++;
	stack[t]=x;
}
}
void pop()
{
int item;
if(t==-1)
{
	printf("\nUnderflow");
}
else
{
	printf("popped element is %d",stack[t]);
	t--;
}
}
void top()
{
if(t==-1)
{
	printf("\nStack is empty");
}
else
{
	printf("%d", stack[t]);
}
}
void display()
{
int i;
for(i=t;i>=0;i--)
{
	printf("%d", stack[i]);
}
}
void main()
{
int c;
do
{
	printf("\nEnter your choice \n 1.Push\t 2.Pop\t 3.Top\t 4.Display \n");
	scanf("%d", &c);
switch(c)
{
case 1: push();
break;
case 2: pop();
break;
case 3: top();
break;
case 4: display();
}
}
while(c!=5);
}
