// Date :18 August 2020 - 27 August 2020 - 28 August 2020
//
// Header files
//
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
//
// Function definition
//
int main(void)
{
	int ***p=NULL;
	int plane,row,column;
	int i,j,k;

	printf("\n\nEnter plane size:\t");   // Accept plane size
	scanf_s("%d",&plane);

	printf("\n\nEnter the row size:\t");   // Accept Row size
	scanf_s("%d",&row);

	printf("\n\nEnter the column size:\t");   // Accept column size
	scanf_s("%d",&column);

	p=(int ***)malloc(plane*sizeof(int **));  //Memory allocate dynamically(bunch of memory dependent on plane size) 
	if(p==NULL)                      // Null checking
	{
		printf("memory allocation Failed");
		return -1;
	}

	printf("___________________________________________________\n");
	for(i=0;i<plane;i++)               
	{
		p[i]=(int **)malloc(row*sizeof(int *)); //Memory allocate one by one dependending upon row size(1D array) 
		if(p[i]==NULL)                         //Null checking
		{
			printf("Memory allocation Failed");
			return 0;
		}
		for(j=0;j<row;j++)                 
		{
			//allocate memory for array depending upon element size(column size)
			p[i][j]=(int *)malloc(column*sizeof(int));       
			if(p[i][j]==NULL)            //Null checking
			{
				printf("Memory allocation Failed");
				return -1;
			}
			for(k=0;k<column;k++)              
			{
				printf("Enter the value in array[%d][%d][%d]:\t",i,j,k);
				scanf_s("%d",&p[i][j][k]);   //Exactly tya nava parynt pohchlo mhun value taklya     
			}
		}
	}

	printf("____________________________________________________\n");
	printf("\nyour 3D Array form:\n");         //printing in matrix Format   
	for(i=0;i<plane;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<column;k++)
			{
				printf("\tArray[%d][%d][%d]:\t%d\n",i,j,k,p[i][j][k]);
			}
		}
		printf("\n");
	}

	//free all memory step by step (sanskar)
	for(i=0;i<plane;i++)   
	{
		for(j=0;j<row;j++)
		{
			free(p[i][j]);
			p[i][j]=NULL;
		}
		 free(p[i]);
		 p[i]=NULL;
	}
	free(p);                 //free last pointer
	p=NULL;                  //sanskar(Avoid dangling pointer)
	_getch();
	return 0;
}