#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
clrscr();
printf("\t\t\tThis Program is for Addition of 3X3 Matrix\n");
printf("\t\t\tPlease Enter 9 Elements in Each\n");
printf("Enter Elements of First Matrix :\n");
for(i=0;i<=2;i++)
     {
     for(j=0;j<=2;j++)
	scanf("%d",&arr1[i][j]);
     }

printf("Enter Elements of Second Matrix :\n");
for (i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	   scanf("%d",&arr2[i][j]);
	}

for (i=0;i<=2;i++)
	{
	for (j=0;j<3;j++)
	arr3[i][j]=arr1[i][j]+arr2[i][j];
	}
printf("The Resulting Matrix is :\n");
for (i=0;i<3;i++)
	{
	for (j=0;j<3;j++)

	printf("%d\t",arr3[i][j]);
	printf("\n");
	}
getch();
}
