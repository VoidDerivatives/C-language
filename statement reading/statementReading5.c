#include<stdio.h>

 void ** fun1(void (*(*)[])(void));
 void ** fun2(void (*(*)[])(void));
 void ** fun3(void (*(*)[])(void));
int main(void)
{
	int i;
	int **p1;
	void (**arr1)(void)={NULL};
	void **(*arr[3])(void (*(*)[])(void)) = {fun1,fun2,fun3};
	void **(*(*p)[3])(void (*(*)[])(void)) = &arr;  // p is pointer which stores the address of array
	void **(*fptr)(void (*(*)[])(void));

	for(i=0;i<3;i++)
	{
		printf("____________________________________________________\n");
		printf("In main funtion\n");
		fptr = arr[i];
		p1 = (int **)fptr(&arr1);
		printf("value of i in main function:%d\n",**p1);
		printf("____________________________________________________\n");
	}

	
	return 0;
}
 void **fun1(void (*(*p)[])(void)) 
{	
	static int i=10;
	static void *p1 = &i;
	printf("In fun1\n");
	printf("address of array is :%d\n",p);
	return &p1;
}
void ** fun2(void (*(*p)[])(void))
{
	static int i=20;
	static void *p1 = &i;
	printf("In fun2\n");
	printf("address of array is :%d\n",p);
	return &p1;
}
void ** fun3(void (*(*p)[])(void))
{
	static int i=30;
	static void *p1 = &i;
		printf("In fun3\n");
	printf("address of array is :%d\n",p);
	return &p1;
}
