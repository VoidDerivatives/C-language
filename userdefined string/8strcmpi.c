// date :20 August 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
int MyStrcmpi(const char *,const char *);
//
// Function definition
//
int main()
{
	char string1[20],string2[20];

	// Accept string1 from user
	printf("\n\nEnter the string1 (Maximum 20 charcters):\t");
	gets_s(string1,20);

	// Accept string2 from user
	printf("\n\nEnter the string2 (Maximum 20 charcters):\t");
	gets_s(string2,20);

	// Display the string1
	printf("\n\nThe string1:\t");
	puts(string1);

	// Display the string2
	printf("\n\nThe string2:\t");
	puts(string2);


	if(MyStrcmpi(string1,string2)==0)    //Function call
	{
		printf("\n\nBoth strings are equal\n");
	}
	else
	{
		printf("\n\nBoth string are not equal\n");
	}
	_getch();
	return 0;
}
int MyStrcmpi(const char *string1,const char *string2)
{
	int count;
	
	for(count=0;string1[count]!='\0' || string2[count]!='\0';count++)
	{
		// Difference between two ASCII VALUE is 32 or -32 or 0 . 

		if(string1[count]-string2[count]==32 || string1[count]-string2[count]==0 || (string1[count]-string2[count]==-32))
		{
		}
		else	
			return 1; // if not match (in between)
	}
	return 0;    // if match all the characters
}