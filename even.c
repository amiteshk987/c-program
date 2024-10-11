#include<stdio.h>
void main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:
			printf(" %d is a even number");
			break;
		case 1:
			printf(" %d is a odd number");
			break;
			default:
		
		printf("invalid");
	}
	}

