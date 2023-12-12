#include<stdio.h>
#include<conio.h>

void main()
{
int s,e,i,j,n;
clrscr();
printf("Enter Starting Number : ");
scanf("%d",&s);
printf("Enter Ending Number : ");
scanf("%d",&e);
for (i=s;i<=e;i++)
{
n=0;
	for (j=1;j<=i;j++)
	{
	       if (i%j==0)
	       n++;
	}
		if (n==2)
		printf("%d is Prime\n",i);
		else
		printf("%d is not prime\n",i);

}
getch();
}
