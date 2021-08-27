//
// header files
//
#include<stdio.h>
#include<conio.h>
//
// function declaration
//
int *(*fun1(void))(void);
int *(*fun2(void))(void);
int *(*fun3(void))(void);

int *function1(void);
int *function2(void);
int *function3(void);
//
// functiom definitions
//
int main()
{
	int *p;
	int *(*p1)(void);
	int *ip;
	int i;
	// we can create 3 functions with same parameter and stored their address in array in particular index
	int *(*(*arr[3])(void))(void)={fun1,fun2,fun3}; 
	
	// he statement me savta banvl ahee khalil code kaami karnya sathi 
	int *(*array1[3])(void)={function1,function2,function3};

	for(i=0;i<3;i++)
	{
		
		printf("-----------------------------------------------------------------------------------------------\n\n");
		printf("call function%d\n",i+1);
		p1=array1[i];
		ip=p1();
		printf("Value of 'interger' in main function Is:\t%d\n\n",*ip);
		printf("___________________________________________\n\n");
		printf("In main function\n");
		p=(int *)arr[i]();
	
		if(p==(int *)function1 || p==(int *)function2 || p==(int *)function3)
		{
			printf("sccessfully return in main function\n");
			continue;
		}
		else
		{
			printf("unsccessfully return in main function\n");
		}
	}
	_getch();
	return 0;
}
int *function1(void)
{
	int a=80;
	int *p=&a;
	printf("In function1\n");
	printf("The value of a Is:\t%d\n",*p);
	return p;
}
int *(*fun1(void))(void)
{
	printf("In fun1\n");
	printf("'fun1' returns the address of 'function1'\n");
	// 'fun' return address of another function
	return function1;
}
int *function2(void)
{
	int a=180;
	int *p=&a;
	printf("In function2\n");
	printf("The value of a Is:\t%d\n",*p);
	return p;
}
int *(*fun2(void))(void)
{
	printf("In fun2\n");
	printf("'fun2' returns the address of 'function2'\n");
	return function2;
	
}
int *function3(void)
{
	int a=1180;
	int *p=&a;
	printf("In function3\n");
	printf("The value of a Is:\t%d\n",*p);
	return p;
}
int *(*fun3(void))(void)
{
		printf("In fun3\n");
		printf("'fun3' returns the address of 'function3'\n");
		return function3;
}