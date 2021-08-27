// Date 16 August 2020
//
// Header Files
//
#include<stdio.h>
//
// Macros
//
#define MAX 50
//
// Function definition
//
int main(void)
{
	int arr[MAX];
	int i;
	int size;
	printf("Enter the size(Less than 50):");
	scanf_s("%d",&size);                   // size given by user

	for(i=0;i<size;i++)                    //accept values from user
	{
		printf("Accept the %d element : ",i);
		scanf_s("%d",&arr[i]);
	}

	printf("\nYour's entering array are....\n\n");
	for(i=0;i<size;i++)                   // Display values 
	{
		printf("Your %d index is:",i);
		printf(" %d\n",arr[i]);
	}

	return 0;
}

