#include<stdio.h>
int swap(int a,int *b);
int main()
{
	int no1,no2,i;
	printf("enter the two nos:");
	scanf("%d%d",&no1,&no2);
	no1=swap(no1,&no2);
    printf("swapping:%d\t%d",no1,no2);
	return 0;
}
int swap(int a,int *b)
{
		a=a+*b;
	       *b=a-*b;
		a=a-*b;
        return a;
}