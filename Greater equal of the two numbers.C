#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
clrscr();
printf("ENTER TWO NUMBERS A AND B, RESPECTIVELY  =  ");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("Therefore %d is greater then %d",a,b);
}
else if(a<b)
printf("Therefore %d is greater then %d",b,a);
else
{
printf("Therefore %d is equal to %d",a,b);
}
getch();
}