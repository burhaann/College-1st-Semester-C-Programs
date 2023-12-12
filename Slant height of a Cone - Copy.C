#include<stdio.h>
#include<math.h>
int main()
{
float radius,height,s,slant_height;
clrscr();
printf("Enter the radius of the Circle on the base of the Cone and its height, respectively \n");
scanf("%f%f",&radius,&height);
s=(height*height)+(radius*radius);
slant_height=sqrt(s);
printf("Slant Height of the Cone is %f",slant_height);
getch();
}
