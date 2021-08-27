// Date :16 August 2020
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
// Function definition
//
int main(void)
{
	int arr[MAX][MAX];
	int row,col,i,j;

	printf("\n\nEnter the row size which is less than Or equal to 50:\t");
	scanf_s("%d",&row);

	printf("\n\nEnter the column size which is less than Or equal to 50:\t");
	scanf_s("%d",&col);
	
	printf("\n______________________________________________");
	printf("\nEnter the array elements\t");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\n\nEnter the element at array[%d][%d] position:\t",i,j);
			scanf_s("%d",&arr[i][j]);
		}
	}

	printf("\n_______________________________________________");
	printf("\nYour 2 Dimensional array....\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\tThe element [%d][%d] is:\t%d\n",i,j,arr[i][j]);
		}
		printf("\n");
	}
	_getch();
	return 0;
}