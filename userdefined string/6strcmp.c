// Date :20 august 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
int MyStrcmp(const char *,const char *);
//
// Function definitions
//
int main(void)
{
	char string1[20];
	char string2[20];

	// Accept string1
	printf("\n\nEnter the string1 (Maximum contain 20 characters):\t");
	gets_s(string1,20);

	// Accept string2
	printf("\n\nEnter the string2 (Maximum contain 20 characters)::\t");
	gets_s(string2,20);


	if(MyStrcmp(string1,string2)==0)     // Function call and checking
	{
		 printf("\n\nBoth string Are same\n");
	}
	else
	{
		printf("\n\nBoth string Are different\n");
	}
	_getch();
	return 0;
}
int MyStrcmp(const char *string1,const char *string2)
{
	int count;

	//comparison loop
	for(count=0;string1[count]!='\0' || string2[count]!='\0';count++)
	{
		if(string1[count]!=string2[count])
			return 1;      // If string are not equal
	}
	return 0;     // If strings are equal 
}

