#include<stdio.h>
#include<conio.h>
int even_odd(int n);
int main()
{
	int n,n1;
	printf("\nEnter Number:-");
	scanf("%d",&n);
        n1=even_odd(n);
	if(n1==1)
		printf("NUMBER IS EVEN");
	else
	    printf("NUMBER IS ODD");
    getch();
	return 0;
}
int even_odd(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}