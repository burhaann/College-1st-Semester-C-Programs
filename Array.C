#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3],i;
clrscr();
printf("Enter a Number \t=\t");
for(i=0;i<3;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<3;i++)
{
printf("Your array Number %d is = %d\n",i,arr[i]);
}
getch();
}