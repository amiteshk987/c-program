#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	printf("enter the third number");
	scanf("%d",&c);
	int small=(a<b) ? ((a<c) ? a:c) : ((b<c) ? b:c);
	printf("smallest number is %d",small);
	return 0;
}
