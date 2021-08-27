//date: 20 August 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
int MyStrlen(const char *);
//
// Function definitions
//
int main(void)
{
	char string[50];

	printf("\n\nEnter the string (Must be contain maximum 50 characters): \t");
	gets_s(string,50);           // Accept string from user

	printf("\n\nLength of the string Is:\t%d",MyStrlen(string));   //call to mystring function and print the value 

    _getch();
	return 0;
}
int MyStrlen(const char *string)           //function definition
{
	int count=0;
	//use NULL statment for count exact length 

	for(count=0;string[count]!='\0';count++);

	return count;           //return count i.e length of the string
}

