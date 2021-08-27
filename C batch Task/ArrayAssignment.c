//Date :20 July 2020
//
// Headers
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
	int arr1[MAX];
	int arr2[MAX];
	int n,i;
	printf("Enter the number which you want to enter in array(Less than 50):");
	scanf_s("%d",&n);

	printf("Enter the %d numbers in array:",n);
	for(i=0;i<n;i++)                        //Accpect 1st Array from user
	{
		scanf_s("%d",&arr1[i]);
	}

	for(i=0;i<n;i++)                     
	{
		arr2[i]=arr1[i];                    //Assgined 1st array in 2nd Array
	}

	printf("\n***** Your Array 1 is *****\n");       //Display 1st Array
	for(i=0;i<n;i++)
	{
		printf("\narr1[%d]: %d",i,arr1[i]);
	}

	printf("\n***** Your Assigned Array 2 is *****\n");            //Displayed assgined 2nd Array
	for(i=0;i<n;i++)
	{
		printf("\narr2[%d]: %d",i,arr2[i]);
	}

	_getch();
}