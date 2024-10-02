#include<stdio.h>
#include<conio.h>
void main()
{
int m,n;
clrscr();
//reading the value of m
printf("Enter the value of m: ");
scanf("%d",&m);
if(m>0)
{
n=1;
}
else if(m==0)
{
n=0;
}
else
{
n=-1;
}
printf("the value of n is: %d\n",n);
getch();
}
getch();

