#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);
int main()
{
	int no1,no2;
	printf("enter the two for swapping:");
	scanf("%d%d",&no1,&no2);
	swap(&no1,&no2);
	printf("\nAfter swapping:%d\t%d",no1,no2);
	getch();
	return 0;
}
void swap(int *a,int *b)
{
                *a=*a+*b;
		*b=*a-*b;
		*a=*a-*b;
}