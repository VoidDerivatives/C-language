// date :28 July 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaratiaon
//
char compare(int [],int [],int,int);
// Macro Expansion
#define MAX 50
//
//Function definition
//
int main(void)
{
	int arr1[MAX];
	int arr2[MAX];
	int i,n,m;

	printf("How many elements you want to enter in array1(LESS THAN 50)");
	scanf_s("%d",&n);

	printf("Enter the %d elements in array1 :\n",n);
	for(i=0;i<n;i++) 
	{
		scanf_s("%d",&arr1[i]);                         //Accpect 1st array
	}

	printf("How many elements you want to enter in array2(LESS THAN 50)");
	scanf_s("%d",&m);

	printf("Enter the %d elements in array2 :\n",m);
	for(i=0;i<m;i++)
	{
		scanf_s("%d",&arr2[i]);                               //Accpect 2nd array
	}

	printf("\nYour 1st array are :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]: %d\n",i,arr1[i]);                    //Display 1st array
	}

	printf("\nYour 2nd array are :\n");
	for(i=0;i<m;i++)
	{
		printf("a[%d]: %d\n",i,arr2[i]);                    //Display 2nd array
	}

	if(compare(arr1,arr2,n,m)==1)
		printf("Array is equal");         //return value is 1
	else
		//If your subscript is not Equal 
		//If your elemnets are not Equal
		printf("Array is not equal");      //return value is 0
	_getch();
	return 0;
}
char compare(int arr1[],int arr2[],int n,int m)   
{
	int i;
	
	if(n!=m)
		return 0;                        //If array subscript is not equal
	else                                //Array subscript is equal
		for(i=0;i<n;i++)
		{
			if(arr1[i]!=arr2[i])         //Member by Member checking
			   return 0;         //If any case in between member is not equal,then directly break not checking other members. 
		}
		return 1;          
}