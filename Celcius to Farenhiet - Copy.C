#include<stdio.h>
#include<conio.h>
int main ()
{
int g;
clrscr();
printf("Enter the Desired temperature in  =  ");
scanf("%d", &g);

printf("Farenhiet Equivelnt of  %d degree Celius  is  =  %d",g,g*9/5+32);
getch();
}