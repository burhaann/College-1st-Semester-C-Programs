#include<stdio.h>
int main()
{
float pie,volume,radius,height;
clrscr();
printf("Enter the radius of the Circle on the base of the Cone and its vloume, respectively \n");
scanf("%f%f",&radius,&volume);
pie=3.14;
height=3*(volume/pie*radius*radius);
printf("Height of the Cone is %f",height);
getch();
}
