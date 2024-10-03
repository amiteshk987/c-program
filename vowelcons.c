#include<stdio.h>
int main()
{
	char p;
	printf("enter any charapter");
	scanf("%c",&p);
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
