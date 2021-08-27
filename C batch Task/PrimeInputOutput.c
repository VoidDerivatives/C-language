#include<stdio.h>
#include<conio.h>
int PerfectNumber(int);
int main(void)
{
	int number;
	printf("Enter the one numbers:");
	scanf_s("%d",&number);
	if(PerfectNumber(number)==0)
		printf("Number %d is not prime",number);
	else
		printf("Number %d is prime",number);          
	_getch();
	return 0;
}
int PerfectNumber(int number)
{
	int i;
	for(i=2;i<number;i++)
	{
		if(number%i==0)
			break;
	}
	if(i==number)
		return 1;
	else
		return 0;
}