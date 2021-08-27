#include<stdio.h>
#include<conio.h>
void swap(int no1,int no2);
int main()
{
	int no1,no2;
	printf("enter the two for swapping:");
	scanf("%d%d",&no1,&no2);
	swap(no1,no2);
	getch();
	return 0;
}
void swap(int no1,int no2)
{
   
	no1=no1+no2;
	no2=no1-no2;
	no1=no1-no2;
	printf("\nAfter swapping:%d\t%d",no1,no2);
}