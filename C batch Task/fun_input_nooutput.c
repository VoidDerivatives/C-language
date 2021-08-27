#include<stdio.h>
#include<conio.h>
void even_odd(int n);
int main()
{
	int n;
	printf("\nEnter Number:-");
	scanf("%d",&n);
	even_odd(n);
	getch();
	return 0;
}
void even_odd(int n)
{
	if(n%2==0)
	     printf("NUMBER IS EVEN");
	else
		printf("NUMBER IS ODD");
}