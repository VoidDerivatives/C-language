#include<stdio.h>
#include<conio.h>
void even_odd();
int main()
{
        even_odd();
	getch();
	return 0;
}
void even_odd()
{
	int n;
	printf("\nEnter Number:-");
	scanf("%d",&n);
	if(n%2==0)
		printf("NUMBER IS EVEN");
	else
		printf("NUMBER IS ODD");
}