// Date :17 august 2020 - 25 august 2020 -26 August 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
//
// Function definition
//
int main()
{
	int **p=NULL;        //define pointer
	int row,col;
	int i,j; 

	printf("\n\nEnter the row size:\t");     //Accept ROW size 
	scanf_s("%d",&row);

	
	printf("\n\nEnter the column size:\t");  //Accept COLUMN size 
	scanf_s("%d",&col);

	p=(int **)malloc(row*sizeof(int *));    //number of pointer depend on ROW size (1D)  

	if(p==NULL)                             //NULL checking
	{
		printf("Memory Allocation Failed");
		return -1;
	}

	printf("\n__________________________________________________");
	for(i=0;i<row;i++)
	{
		p[i]=(int *)malloc(col*sizeof(int));          //Allocate memory for 1D array sperately
		if(p[i]==NULL)                                //NULL checking
		{
			printf("Memory Allocation Failed");
			return -1;
		}
		for(j=0;j<col;j++)                          //Accept elements from user
		{
			printf("\nEnter the value in array[%d][%d]:\t",i,j);
			scanf_s("%d",&p[i][j]);
		}
	}

	printf("\n_____________________________________________________");
	printf("\n\nYour 2d array..\n");    //Display in matrix format
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\tArray[%d][%d]= %d\t",i,j,p[i][j]);
			printf("\n");
		}
		printf("\n");
	}

	for(i=0;i<row;i++)                 //Free 1D memory one by one
	{
		free(p[i]);
		p[i]=NULL;
	}
	free(p);                         //free pointer pointing to pointer(whole memory)  
	p=NULL;                          //sanskar(avoid Dangling pointer)
	
	_getch();
	return 0;
}

	