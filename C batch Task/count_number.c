#include<stdio.h>
int count(int n);
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("\ncount:%d\n",count(n));
	return 0;
}
int count(int n)
{
	int count=0;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	return count;
}