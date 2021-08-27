// Date :21 august 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
char *MyStrlwr(char *);
//
// Function definitions
//
int main()
{
	char string[20];

	//Accept string from user
	printf("\n\nEnter the string (Maximum 20 characters):\t");
	gets_s(string,20);

	MyStrlwr(string); //Function call

	printf("\n\nReverse string is:\t");
	puts(string);

	_getch();
	return 0;
}
char * MyStrlwr(char *string)
{
	int count;

	// convert captial to small letters
	for(count=0;string[count]!='\0';count++)
	{
		if(string[count]>=65 && string[count]<=90)
		{
			string[count]=string[count]+32;
		}
	}
	string[count]='\0';  //explicitly '\0'
	return string;
}
