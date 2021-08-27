#include<stdio.h>
void recursion(int n);
main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	recursion(n);
	return 0;
}
void recursion(int n)
{
	printf("%d\n",n);
	if(n!=0)
	     recursion(n-1);
}