#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
clrscr();
printf("Enter a Number = ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    if (i%2==0)
    printf("%d is Even\n",i);
    else
    printf("%d is odd\n",i);
}
getch();
}

