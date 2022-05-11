/*Array*/
#include<stdio.h>
#define N 5
int array[N];
void big();
void small();
void reverse();
void sum();
void mean();
int main()
{
int i,n;
char a;
	printf("Enter the array elements\n");
for(i=0;i<N;i++)
{
	scanf("%d",&array[i]);
}
do
{
	printf("Enter the operator no : ");
	scanf("%d",&n);
switch(n)
{
	case 1:big();
break;
	case 2:small();
break;
	case 3:reverse();
break;
	case 4:sum();
break;
	case 5:mean();
break;
	default:printf("Invalid Operator");
}
	printf("Do you want to continue?\n");
	scanf("%s",&a);
}
while((a=='Y')||(a!='y'));
return 0;
}
void big()
{
int i,big=0;
for(i=0;i<N;i++)
{
if(array[i]>big)
{
	big=array[i];
}
}
	printf("Biggest of the array is %d\n",big);
}
void small()
{
int i,small;
	small=array[0];
for(i=1;i<N;i++)
{
if(array[i]<small)
{
	small=array[i];
}
}
	printf("Smallest of the array is %d\n",small);
}
void reverse()
{
int i;
for(i=N-1;i>-1;i--)
{
	printf("%d\t",array[i]);
}
	printf("\n");
}
void sum()
{
int i,sum=0;
for(i=0;i<N;i++)
{
	sum=sum+array[i];
}
	printf("Sum of the elements in the array is %d\n",sum);
}
void mean()
{
int i,sum=0,mean;
for(i=0;i<N;i++)
{
	sum=sum+array[i];
}
	mean=sum/N;
	printf("Mean of the elements in the array is %d\n",mean);
}
