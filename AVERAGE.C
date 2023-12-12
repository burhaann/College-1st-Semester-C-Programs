#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,a;
float avr,sum=0;
clrscr();
printf("Enter Number of Elements : ");
scanf("%d",&n);
printf("Enter Elements : ");
for (i=1;i<=n;i++)
{
	scanf("%d",&a);
	sum=sum+a;
}
avr=sum/n;
printf("Average of Given Numbers : %f",avr);
getch();
}




