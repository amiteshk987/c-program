#include<stdio.h>
int vowel(char);
int main()
{
		char p;
	printf("enter any character");
	scanf("%c",&p);
	vowel(p);
	return 0;
}
	int vowel(char p)
	{
	
	if(p=='a'||p=='A'||p=='e'||p=='E'||p=='i'||p=='I'||p=='o'||p=='O'||p=='u'||p=='U')
	{
		printf("It is an vowel",p);
	}
	else if ((p>='a' && p<='z') || (p>='A' && p<='Z'))
	{
		printf("It is an consonent");
	}
	return 0;
}
