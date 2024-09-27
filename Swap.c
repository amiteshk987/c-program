#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,z;
	printf("enter first number: ");
	scanf("%d",&a);
	printf("enter the second number: ");
	scanf("%d",&b);
	printf("before swapping a=%d and b=%d",a,b);
	z=a;
	a=b;
	b=z;
	printf("after swapping a=%d and b=%d",a,b);
	
}
