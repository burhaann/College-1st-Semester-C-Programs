#include<stdio.h>
#include<math.h>
int main()
{
float pie,radius,height,s,slant_height,surface_area;
clrscr();
printf("Enter the radius of the Circle on the base of the Cone and its height, respectively \n");
scanf("%f%f",&radius,&height);
s=(height*height)+(radius*radius);
slant_height=sqrt(s);
pie=3.14;
printf("Slant Height of the Cone is %f\n",slant_height);
surface_area=pie*radius*(radius+slant_height);
printf("Surface Area of the Cone is %f\n",surface_area);
getch();
}

