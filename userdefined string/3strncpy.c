// date :20 August 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Fuction declaration
//
char *MyStrncpy(char *,const char *,int);
//
// Function definitions
//
int main(void)
{
	char destination[20];
	char source[20];
	int n;

	// Accept source string form user
	printf("\n\nEnter source string:(must be contain maximum 20 character)\t");
	gets_s(source,20);

	// Accept value from user
	printf("\n\nEnter the value:\t");
	scanf_s("%d",&n);

	// Display string
	printf("\n\nSource string Is:\t");
	puts(source);

	MyStrncpy(destination,source,n);  // Function call

	printf("\n\nDestination string Is:\t");
	puts(destination);

	_getch();
	return 0;
}
char* MyStrncpy(char *destination,const char *source,int n)
{
	int count;

	// only number of character copy
	for(count=0;count<n;count++)
	{
		if(source[count]!='\0')                     // to optimise for loop
			destination[count]=source[count];
		else
			break;
	}

	// changes actomatically reflect to the caller
	// call by reference
	destination[count]='\0';      // Explicitly give '\0' beacause its string
	return destination;
}


