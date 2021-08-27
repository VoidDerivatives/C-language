// Date :18 August 2020  - 27 August 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Macros
//
#define MAX 50
//
// Function Definition
//
int main(void)
{
	int a[MAX][MAX][MAX];
	int i,j,k;
	int plane,row,col;

	printf("Your array is type of interger\n");
	printf("\n\nEnter the plane size(Less Than 50):\t");           //Accept Plane
	scanf_s("%d",&plane);

	printf("\n\nEnter the row size(Less Than 50):\t");             //Accept Row
	scanf_s("%d",&row);

	printf("\n\nEnter the column size(Less Than 50):\t");            //Accpect Column
	scanf_s("%d",&col);


	printf("________________________________________________");
	for(i=0;i<plane;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				//Accept one by one value from user
				printf("\nEnter the value in array[%d][%d][%d]:\t",i,j,k);              
				scanf_s("%d",&a[i][j][k]);
			}
		}
	}

	printf("________________________________________________________");
	printf("\n\nYour 3D array form:\n\n");          //Display in matrix form
	for(i=0;i<plane;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				printf("\tArray[%d][%d]%d]:\t%d\n",i,j,k,a[i][j][k]);
			}
		}
		printf("\n");
	}
	getch();
	return 0;

}