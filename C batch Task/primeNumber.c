#include<stdio.h>
#include<conio.h>
int PerfectNumber(void);
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
	if(number==2)
		return 1;   
	if(number%2==0)
		return 0;
	else
	{
		for(i=3;i<number/2;)
		{   
			if(number%i==0)
				return 0;
			i=i+2;
		}
			return 1;
	}
	_getch();
}