#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,n;
clrscr();
printf("Enter the number of rows\t=\t");
scanf("%d",&n);
for (r=1;r<=n;r++)
{
for (c=1;c<=r;c++)
printf("*");
printf("\n");
}
getch();
}