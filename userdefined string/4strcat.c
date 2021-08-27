// Date : 20 August 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
char* MyStrcat(char *,const char *);
//
// Function definitions 
//
int main(void)
{
	char destination[40];
	char source[20];

	// Accept destination string from use
	printf("\n\nEnter the destination (Maximum contain 20 characters):\t");
	gets_s(destination,40);

	// Accept Source string from 
	printf("\n\nEnter the source string (maximum contain 20 characters):\t");
	gets_s(source,20);

	MyStrcat(destination,source);    // Function call

	printf("\n\nConcatenated string Is:\t");
	puts(destination);
	
	_getch();
	return 0;
}
char *MyStrcat(char *destination,const char *source)
{
	int count,count1;

	// loop goes end of the destination
	for(count=0;destination[count]!='\0';count++)
	{
	}

	// source string copy into destination (one by one)
	for(count1=0;source[count1]!='\0';count1++,count++)
	{
		destination[count]=source[count1];
	}

	// call by reference (Automatically reflection)
	destination[count]='\0';    //Explicity '\0' beacause string
	return destination;
}

