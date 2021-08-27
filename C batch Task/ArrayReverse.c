#include<stdio.h>
int main(void)
{
	int arr[10000];
	int size;
	int data;
	int counter;
	int TotalNoOfData = 1;
	int temp,counter1;	

	printf("Enter the total number of array :\t");
	scanf("%d",&size);	
	

	for(counter = 0 ; counter < size ; counter++)
	{
		printf("Enter the data : \t");
		scanf("%d",&data);

		if(TotalNoOfData == 1)
			arr[size - 1] = data;
		else
		{
			temp = size - TotalNoOfData;
			while(temp != size-1)
			{				
				arr[temp] = arr[temp + 1];
				temp++;
			}
			arr[size - 1] = data;
		 
		}	
		TotalNoOfData++;

		for(counter1 = 0;counter1 < size ; counter1++)
		{
			printf("| %d |\t",arr[counter1]);		
		}	
	}

	printf("Final code output ");	
	for(counter = 0;counter < size ; counter++)
	{
		printf("| %d |\t",arr[counter]);		
	}

	return 0;
}

