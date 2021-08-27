// date :27 August 2020 -29 August 2020
//
// Header Files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
void *fun(int,int (*)(void));
int fun1(void);
//
// Function definitions
//
int main(void)
{
	int check;
	int *Pcheck;
	void *(*fptr)(int,int(*)(void))=NULL;   //fptr is function pointer
	int (*fptr1)(void)=NULL; //Function pinter

	fptr1=fun1;       //Now fptr1 is behave like a function
	check=fptr1();       // function call

	if(check==1)
	{
		printf("\n\nSuccesfully coming in main function from fun1\n");
	}
	else
	{
		printf("\n\nFailed fun1 function\n");
	}
	fptr=fun;               //Now fptr is behave like a function

	printf("\n_____________________________________________\n");
	// we have to type-cast beacause its return type is void pointer
	Pcheck=(int *)fptr(3,fptr1);  //function call

	// typecast is important for compability
	if(Pcheck==(int*)fptr1)    // checking address is equal or not        
	{
	printf("\n\nAddress is return from fun1 successfully :\t%d",Pcheck);
	}
	else
	{
		printf("\n\nFailed to return address in main function\n");
	}

	fptr1=NULL;		//sanskar (avoid dangling pointer)
	fptr=NULL;		//sanskar (avoid dangling pointer)

	_getch();
	return 0;
}
int fun1(void)
{
	printf("\n\nIn fun1:\n");
	printf("\n\nfun1 is parameter of another function\n");
	return 1;
}
void *fun(int no,int (*p)(void))
{
	printf("\n\nIn fun\n");
	printf("\n\nValue of 1st parameter:\t%d\n",no);
	printf("\n\nAddress of 2nd parameter:\t%d\n",p);  //p is function pointer which stores the address of fun1
	return p;
} 