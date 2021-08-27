// Date :20 august 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
int MyStrcmpi(const char *,const char *,int);
//
// Function definitions
//
int main()
{
	char string1[20],string2[20];
	int n;

	// Accept string1 from user
	printf("\n\nEnter the string1 (Maximum 20 characters):\t");
	gets_s(string1,20);

	// Accept string2 from user
	printf("\n\nEnter the string2 (Maximum 20 characters):\t"); 
	gets_s(string2,20);

	// Accpect value from user
	printf("\n\nEnter the value:\t");
	scanf_s("%d",&n);

	// Display string1
	printf("\n\nThe string1:\t");
	puts(string1);

	// Display string2
	printf("\n\nThe string2:\t");
	puts(string2);

	// Function call & checking
	if(MyStrcmpi(string1,string2,n)==0) 
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
int MyStrcmpi(const char *string1,const char *string2,int n)
{
	int count;
	
	// loop for only nth characters
	for(count=0;count<n;count++)
	{
		if((string1[count]-string2[count]==32 ||string1[count]-string2[count]==0) || (string1[count]-string2[count]==-32))
		{
		}
		else	
			return 1;     //If string is not equal
	}
	return 0;    // If string is equal
}