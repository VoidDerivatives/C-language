// date: 21 august 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
char *MyStrnset(char *,char ch,int);
//
// Function definitions
//
int main()
{
	char string[20];
	char ch;
	int n;

	// Accept string from user
	printf("\n\nEnter the string (Maximum 20 characters):\t");
	gets_s(string,20);

	// Accept character from user  
	printf("\n\nEnter the character:\t");
	scanf_s("%c",&ch);

	// Accept value from value
	printf("\n\nEnter the value:\t");
	scanf_s("%d",&n);

	MyStrnset(string,ch,n); // Function call

	printf("\n\nNow string is:\t");
	puts(string);

	_getch();
	return 0;
}
char *MyStrnset(char *string,char ch,int n)
{
	int count;
	// number of character is set only
	for(count=0;string[count]!='\0' && count<n ;count++)
	{
		string[count]=ch;
	}
	string[count]='\0';
	return string;
}

