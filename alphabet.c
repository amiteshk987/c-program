#include<stdio.h>
void main()
{
	char c;
	printf("enter the alphabet");
	scanf("%s",&c);
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		printf("It is an alphabet",c);
	}
		else
		{
			printf("It is not an alphabet",c);
		}
	}

