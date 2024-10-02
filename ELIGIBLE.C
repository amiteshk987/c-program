#include<stdio.h>
#include<conio.h>
void main()
{
int maths,physics,chemistry,total_all,total_maths_phy;
clrscr();
printf("Enter the marks in math: ");
scanf("%d",&maths);
printf("Enter the marks in physics: ");
scanf("%d",&physics);
printf("Enter the marks in chemistry: ");
scanf("%d",&chemistry);
total_all=maths+physics+chemistry;
total_maths_phy=maths+physics;
printf("Total marks of maths Physics and chemistry: %d\n",total_all);
printf("total marks of maths and  physics: %d\n",total_maths_phy);
if(maths>=65 && physics>=55 && chemistry>=50 && (total_all >=190 || total_maths_phy >=140))
{
printf("This candidate is eligible for adsmission");
}
else
{
printf("This candidate is not eligible for admission")
}
getch();
