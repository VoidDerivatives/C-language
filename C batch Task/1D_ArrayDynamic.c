// Date 16 August 2020 :19 August 2020
//
// Header Files
//
#include<stdio.h>
#include<malloc.h>
//
// Function definition
//
int main(void)
{
	int *p=NULL;
	int i;
	int size;
	printf("Enter the size:");
	scanf_s("%d",&size);                   // size given by user
	
	p=(int *)malloc(size*sizeof(int));     // allocate memory dynamically

	if(p==NULL)                            //NULL checking
	{
		printf("Memory allocation FAILED");
		return -1;                        // Errornious return
	}

	for(i=0;i<size;i++)                    //Accept values from user
	{
		printf("Accept the %d element : ",i);
		scanf_s("%d",&p[i]);
	}

	printf("\nYour Array are....\n");
	for(i=0;i<size;i++)                   // Display values 
	{
		printf("Your %d index is:",i);
		printf(" %d\n",p[i]);
	}

	free(p);                             //free pointer
	p=NULL;                             
	return 0;
}
	

