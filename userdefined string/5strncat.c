// Date :20 August 2020
//
// Header Files 
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
char *MyStrncat(char *,const char *,int);
//
// Function definitions
//
int main(void)
{
	char destination[40];
	char source[20];
	int n;

	// Accept destination string from user
	printf("\n\nEnter the destination:\t");
	gets_s(destination,40);

	// Accept source string from user
	printf("\n\nEnter the source string:\t");
	gets_s(source,20);

	//Accept value from user
	printf("\n\nEnter the value:\t");
	scanf_s("%d",&n);

	MyStrncat(destination,source,n); // Function call

	printf("\n\nConcatenated string Is:\t");
	puts(destination);
	
	_getch();
	return 0;
}
char *MyStrncat(char *destination,const char *source,int n)
{
	int count,count1;

	for(count=0;destination[count]!='\0';count++)
	{
	}

	// only number of charcter concatinates
	for(count1=0;source[count1]!='\0' && count1<n ;count1++,count++)
	{
		destination[count]=source[count1];
	}

	// Call by reference
	destination[count]='\0';  // Explicitly '\0' beacause of string
	return destination;
}

