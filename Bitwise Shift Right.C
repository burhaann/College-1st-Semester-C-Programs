#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter two Numbers = ");
scanf("%d",&a);
printf("Enter how many shifts need to be done = ");
scanf("%d",&b);
c=(a>>b);
printf("%d",c);
getch();
}

