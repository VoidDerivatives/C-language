#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==1 || i==n && j<=n || j==1 || j==n)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf(" ");
		                if(j+i==n/2 || i+j==n-1+(n/2) ||j==i+(n/2) || i==j+(n/2))
                                printf("*");
			             else
				printf(" ");
		      } 
		printf("\n");
		}
	 }
	return 0;
}