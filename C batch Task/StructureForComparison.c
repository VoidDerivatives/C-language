// DATE : 17 JULY 2020 - 22 July 2020 - 24 July 2020
//
// HEADER FILES
//
#include<stdio.h>
#include<conio.h>
//
// FUNCTION DECLARATION
//
int comparison(struct compare,struct compare);
//
// STRUCTURE  DECLARATION
//
struct compare
{
	int i;               
	double d;           
	float f;           
	char c;             
};                       
//
// FUNCTION DEFINITION
//
int main(void)
{
	struct compare obj1;
	struct compare obj2;
	printf("Enter the first object from the following sequence");

	printf("\n1}integer\n2}double\n3}float\n4}character\n");
	scanf_s("%d %lf %f %c",&obj1.i,&obj1.d,&obj1.f,&obj1.c);

	printf("\n\nEnter the second object from the following sequence");
	printf("\n1}integer\n2}double\n3}float\n4}character\n");
	scanf_s("%d %lf %f %c",&obj2.i,&obj2.d,&obj2.f,&obj2.c);

	printf("\nYour first content of object are...");          //display 1st object 
	printf("\n1}integer:%d",obj1.i);
	printf("\n2}double:%lf",obj1.d);
	printf("\n3}float:%f",obj1.f);
	printf("\n4}character:%c\n",obj1.c);

	printf("\n\nYour second content of object are...");     //display 2nd object
	printf("\n1}integer:%d",obj2.i);
	printf("\n2}double:%lf",obj2.d);
	printf("\n3}float:%f",obj2.f);
	printf("\n4}character:%c\n",obj2.c);

	if(comparison(obj1,obj2)==1)                   //FUNCTION CALL 
		printf("\n\nTHE OBJECTS ARE EQUAL");
	else
		printf("\n\nTHE OBJECTS ARE NOT EQUAL");
	_getch();
	return 0;
}
int comparison(struct compare obj1,struct compare obj2)
{
	if(obj1.i==obj2.i && obj1.d==obj2.d && obj1.f==obj2.f && obj1.c==obj2.c)
		return 1;
	else
		return 0;
}  