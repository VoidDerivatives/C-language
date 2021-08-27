//DATE : 15 JULY 2020
//
// HEADER FILES
//
#include<stdio.h>
#include<conio.h>
//
// STRUCTURE DECLARATION
//
struct demo
{
	int i;
	float f;
	double d;
}obj1,obj2,obj3;
//
// FUNCTION DEFINATION
//
int main()
{
	printf("Enter the object values\nEnter the interger value:");
	scanf_s("%d",&obj1.i);                  //FIRST OBJECT MEMBER
	printf("\nEnter the float value:");
	scanf_s("%f",&obj1.f);                  //SECOND OBJECT MEMBER
	printf("\nEnter the double:");
	scanf_s("%lf",&obj1.d);
	printf("\nYour entering values are\ninterger :- %d\nfloat :- %f\ndouble :- %lf\n",obj1.i,obj1.f,obj1.d);
	printf("\nNow we are copy the object 1 into object 2 with the help of direct method:");
	obj2=obj1;                            //DIRECT METHOD(COPY)
	printf("\nobjects THREE are \ninterger :- %d\nfloat :- %f\ndouble :- %lf\n",obj2.i,obj2.f,obj2.d);
	printf("\nNow we are copy the object 1 into object 3 with the help of member by member method:");
	obj3.i=obj1.i;                       			 //MEMBER BY MEMBER(COPY)
	obj3.f=obj1.f;						 //MEMBER BY MEMBER(COPY)					
	obj3.d=obj1.d;						//MEMBER BY MEMBER(COPY)
	printf("\nobjects THREE are \ninterger :- %d\nfloat :- %f\ndouble :- %lf\n",obj3.i,obj3.f,obj3.d);       //DISPLAY
	_getch();
	return 0;
}
