#include<stdio.h>
int main()
{
		char p;
	printf("enter any character");
	scanf("%c",&p);
	switch (p){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    	printf("it is a vowel");
	default:
	
		printf("it is a consonent");
	}
	return 0;
}
