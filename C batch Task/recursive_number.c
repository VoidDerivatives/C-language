#include<stdio.h>
int recursion(int n);
main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	recursion(n);
	return 0;
}
int recursion(int n)
{
	printf("%d\n",n);
	if(n!=0)
	return (recursion(n-1));
}