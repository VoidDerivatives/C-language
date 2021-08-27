#include<stdio.h>
#include<conio.h>
void** fun(int *,float **(*)(float *,float **));
float** fun1(float *,float **);
int main(void)
{
	float f=12.32f;
	float  *fp;
	int i=10;
	float *ptrf=NULL;
	void **(*fptr)(int *,float **(*)(float *,float **))=NULL;
	float **(*fptr1)(float *,float **)=NULL;

	printf("In main function\n\n");

	fp=&f;
	fptr1=fun1;                    // now fptr1 is behave like a function                      
	ptrf=(float *)fptr1(&f,&fp);         // call to fptr1 and assgined to pointer
	if(ptrf==(float *)(&fp))                        // check all godd or not
	{
		printf("\nSuccessful return form fun1\n");
	}
	printf("\n____________________________________________________________________\n\n");

	fptr=fun;                                 // Now fptr is behave like a function
    // Re-use the ptrf  variable
	ptrf=(float *)fptr(&i,fptr1);            // call to fprt and assgined tp pointer
	if(ptrf==(float *)fptr1)                  // check all good or not
	{
		printf("Successfully return form fun\n");
	}
	fptr=NULL;
	fptr1=NULL;
	ptrf=NULL;
	_getch();
	return 0;
}
void** fun(int *ip,float **(*ptr)(float *,float **))  
{
	printf("In fun\n");
	printf("Value of i is :%d\n",*ip);
	printf("address of fun1 is :%d\n",ptr);
	return ptr;
}
// first call to these function beacuse its a second parameter of another function
float** fun1(float *floatP,float **fpp)
{
	printf("In fun1\n");
	printf("The value of float in main function is :\t%f\n",*floatP);
	// call by reference (automatically change)
	*floatP=45.4f;                                       // changed the value of float

	printf("Changed value of float in fun1 :\t%f\n",*floatP);
	**fpp=21.34f;
	printf("Again changed the value of float through second parameter :\t%f",**fpp);
	return fpp;
}