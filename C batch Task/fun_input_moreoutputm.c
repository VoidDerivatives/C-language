#include<stdio.h>
#include<conio.h>
void even_odd(int n,int *k);
int main()
{
	int n;
	int k;
	printf("\nEnter Number:-");
	scanf("%d",&n);
	even_odd(n,&k);
	if(k==0)
	     printf("NUMBER IS EVEN");
	else
		printf("NUMBER IS ODD");
	getch();
	return 0;
}
void even_odd(int n,int *k)
{
   *k=n%2;
}