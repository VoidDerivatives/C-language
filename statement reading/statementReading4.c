#include<stdio.h>
#include<conio.h>
int (*fun1(int *))[2];
int (*fun2(int *))[2];
int (*fun3(int *))[2];

int main(void)
{
	int *p1;
	int a=100;
	int counter;
	int counter1;
	int	(*(*arr1[3])(int *))[2]={fun1,fun2,fun3};
	
	for(counter1=0;counter1<3;counter1++)
	{
		p1=(int *)arr1[counter1](&a);
		for(counter=0;counter<2;counter++)
		{
			//printf("%d\n",*( (& (*p1) )+counter ));
			printf("%d\n",*(p1+counter));
		}
		printf("_________________________________________\n");
	}

	_getch();
	return 0;
}                       
int (*fun1(int *p))[2]
{
	static int arr[2]={10,20};
	
	printf("In fun1\n");
	printf("value of a is :%d\n",*p);
	return &arr;
}
int (*fun2(int *p))[2]
{
	static int arr[2]={80,20};
	
	printf("In fun2\n");
	printf("value of a is :%d\n",*p);
	return &arr;
}
int (*fun3(int *p))[2]  
{
	static int arr[2]={50,60};
	
	printf("In fun3\n");
	printf("value of a is :%d\n",*p);
	return &arr;
}
