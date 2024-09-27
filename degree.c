#include<stdio.h>
#include<conio.h>
void main()
{
	float celcius,fahrenhiet;
	printf("Enter the temperature in celcius: ");
	scanf("%f",&celcius);
	fahrenhiet=(celcius*9/5)+32;
	printf("%f celcius is equal to %f fahrenhiet\n",celcius,fahrenhiet);
}
