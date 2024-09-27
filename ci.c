#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	float p,r,t,a,ci;
	printf("enter the principle: ");
	scanf("%f",&p);
	printf("enter the anual rate in percentage: ");
	scanf("%f",&r);
	printf("enter the time: ");
	scanf("%f",&t);
	a= p* pow((1+r/100),t);
	ci=a-p;
	printf("the amount a=%f: ",a);
	printf("the compound intrest is %f: ",ci);
}
