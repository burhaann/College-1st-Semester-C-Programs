#include<stdio.h>
int main()
{
float pie,area,radius,perimeter;
clrscr();
printf("Enter the radius of the circle \n");
scanf("%f",&radius);
pie=22/7;
area=pie*radius*radius;
printf("Area of Cicle is %f\n",area);
perimeter=2*pie*radius;
printf("Perimeter of the Circle is %f",perimeter);
getch();
}