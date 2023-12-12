#include<stdio.h>
#include<conio.h>
void main()
{
char red;
clrscr();
printf("Enter any character = \n");
scanf("%c",&red);
switch (red)
{
case 'a' :
case 'e' :
case 'i' :
case 'o' :
case 'u' :
printf("Vowel");
break;
default:printf("Consonant");
}
getch();
}