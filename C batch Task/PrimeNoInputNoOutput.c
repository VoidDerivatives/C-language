#include<stdio.h>
#include<conio.h>
void PerfectNumber();
int main(void)
{
	PerfectNumber();
	return 0;
}
void PerfectNumber()
{
	int i;
	int number;
	printf("Enter the one numbers:");
	scanf_s("%d",&number);
	for(i=2;i<number;i++)
	{
	    if(number%i==0)
			break;
	}
	if(i==number)
		printf("number %d is prime number",number);
	else
		printf("number %d is not prime number",number);
	_getch();
}