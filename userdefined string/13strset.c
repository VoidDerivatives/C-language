// date :21 august 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration 
//
char *MyStrset(char *,char ch);
//
// Function definitions
//
int main()
{
	char string[20];
	char ch;

	// Accept string from user
	printf("\n\nEnter the string (Maximum 20 characters):\t");
	gets_s(string,20);

	// Accpect character from user
	printf("\n\nEnter the character:\t");
	scanf_s("%c",&ch);

	
	MyStrset(string,ch);  //Function call

	printf("\n\nNow string is:\t");
	puts(string);

	_getch();
	return 0;
}
char *MyStrset(char *string,char ch)
{
	int count;

	// loop for replace every string character by the user character
	for(count=0;string[count]!='\0';count++)
	{
		string[count]=ch;
	}
	//we can avoid explicitly '\0' here
	string[count]='\0';   //explicitly '\0' 
	return string;
}