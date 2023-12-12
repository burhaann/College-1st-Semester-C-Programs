 #include<stdio.h>
int main()
{
int y;
clrscr();
printf("Enter a year to check if it is a leap year = ");
scanf("%d",&y);
if(y%400==0)
{
printf("%d is a Leap Year",y);
}
else if(y%100==0)
{
printf("%d isn't a Leap Year",y);
}
else if(y%4==0)
{
printf("%d is a Leap Year",y);
}
else
printf("%d isn't a Leap Year.",y);
getch();
}