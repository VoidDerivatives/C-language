#include<stdio.h>
int main()
{
	int n;
	int temp=0;
	printf("enter the no:");
	scanf("%d",&n);
    while((n%10)!=0)
	{
		 temp=temp*10+n%10;
		 n=n/10;
    }
	printf("reverse:%d",temp);
	return 0;
}