#include<stdio.h>
#include<conio.h>
int main(void)
{
	char a[20];
	int i,num,c;
	printf("enter the number from user for showing binary using array:");
	scanf("%d",&num);
	for(i=1;i<=8;i++)
	{
		a[i]=num%2;
		num=num/2;
	}
	for(i=8;i>0;i--)
	{
		printf("%d\t",a[i]);
	}
	_getch();
}
