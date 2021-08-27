#include<stdio.h>
int fact(int n);
int main()
{
	int n,i;
	printf("enter the no :  ");
	scanf("%d",&n);
	printf("factorial is:  %d\n",fact(n));
	return 0;
}
int fact(int n)
{
        if(n!=1)
           return (fact(n-1)*n);
}