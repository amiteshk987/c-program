#include<stdio.h>
int main()
{
	int num,rev,rem;
	printf("enter the number");
	scanf("%d",&num);
	int original=num;
	while(num !=0){
		rem=num%10;
		rev=rev*10 + rem;
		num /=10;
	}
	if(original==rev){
		printf("%d is palindrome",original);
	}
	else
	{
		printf("%d is not a palindrome");
	}
	return 0;
}
