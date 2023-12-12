#include<stdio.h>
int main()
{
float pie,area,radius;
clrscr();
printf("Enter the radius of the circle \n");
scanf("%f",&radius);
pie=22/7;
area=pie*radius*radius;
printf("Area of Cicle is %f",area);
getch();
}