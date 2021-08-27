#include<stdio.h>
#include<conio.h>
void PerfectNumber(int);
int main(void)
{
	int number;
	printf("Enter the one numbers:");
	scanf_s("%d",&number);
	PerfectNumber(number);         
	_getch();
	return 0;
}
void PerfectNumber(int number)
{
	int i;
	for(i=2;i<number;i++)
	{
		if(number%i==0)
			break;
	}
		if(i==number)
			printf("Number %d is prime",number);
		else
			printf("Number %d is not prime",number);
	
}