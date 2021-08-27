// date :21 August 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
char *MyStrrev(char *);
//
// Function definition
//
int main()
{
	char string[20];

	// Accept string1 from user
	printf("\n\nEnter the string1 (Maximum 20 characters):\t");
	gets_s(string,20);

	MyStrrev(string);  //Function call

	printf("\n\nReverse string is:\t");
	puts(string);

	_getch();
	return 0;
}
char *MyStrrev(char *string)
{
	int count;
	char ch;   // temporary variable
	int i=0;

	for(count=0;string[count]!='\0';count++)
	{
	}

	   //swap logic 
		while(i<count)         
		{
		count--;
		ch=string[count];
		string[count]=string[i];
		string[i]=ch;
		i++;
		}
		return string;
		//no need to give explicitly '\0'
}
