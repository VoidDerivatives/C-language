// date : 20 August 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
char *MyStrcpy(char *,const char *);
//
// Function definitions
//
int main(void)
{
	char destination[20];
	char source[20];

	// Accept string from user
	printf("\n\nEnter source string (must be contain maximum 20 character):\t");
	gets_s(source,20);

	// display that string
	printf("\n\nSource string Is:\t");
	puts(source);

	MyStrcpy(destination,source);   // Function call 

	printf("\n\nDestination string Is:\t");
	puts(destination);               

	_getch();
	return 0;
}
char *MyStrcpy(char *destination,const char *source)
{
	int count=0;

	//loop for copy one by one character
	for(count=0;source[count]!='\0';count++)
	{
		destination[count]=source[count];
	}
	
	// changes actomatically reflect to the caller
	// call by reference
	destination[count]='\0';    // Explicitly give '\0' beacause its string
	return destination;
}