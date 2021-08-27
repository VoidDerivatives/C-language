// Date :21 august 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// function declaration
//
char *MyStrupr(char *);
//
// Function definitions
//
int main()
{
	char string[20];

	// Enter the string
	printf("\n\nEnter the string (Maximum 20 characters):\t");
	gets_s(string,20);

	MyStrupr(string); //Function call

	printf("\n\nReverse string is:\t");
	puts(string);

	_getch();
	return 0;
}
char *MyStrupr(char *string)
{
	int count;
	// small to capital convertion
	for(count=0;string[count]!='\0';count++)
	{
		if(string[count]>=97 && string[count]<=122)
		{
			string[count]=string[count]-32;
		}
	}
	string[count]='\0';   //Explicitily '\0'
		return string;
}
