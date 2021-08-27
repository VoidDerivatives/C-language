#include<stdio.h>
int main()
{
	int a[100][100];
	int i,j,k=1;
	int row;
	int last;
	int first;
	printf("enter the no:");
	scanf("%d",&row);
	last=row-1;
	first=0;
	for(i=0;i<row/2+2;i++,first++,last--)
	{
        for(j=first;j<=last;j++,k++)
		{
           a[first][j]=k;
		}
		for(j=first+1;j<=last;j++,k++)
		{
			a[j][last]=k;
		}
		for(j=last-1;j>=first;j--,k++)
		{
			a[last][j]=k;
		}
		for(j=last-1;j>=first+1;j--,k++)
		{
			a[j][first]=k;
		}
          }
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}