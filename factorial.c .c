#include<stdio.h>
void main()
{
int num;
int factorial=1;
printf("enter the number");
scanf("%d",&num);
if(num<0)
{
	printf("factorial is not for negative number");
	
}
else
{
	for(int i=1;i<=num;i++)
	factorial *=i;
}
	printf("factroial is %d and %d ",factorial,num);


}

