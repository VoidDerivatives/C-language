// date :22 august 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
char *MyStrstr(char *,char *);
//
// function definitions
//
int main()
{
	char string1[40],string2[40];
	char *ptr=NULL;

	// Accpet string1 
	printf("\n\nEnter the string1(Maximum 40 characters):\t");
	gets_s(string1,40);

	// Accpect string2
	printf("\n\nEnter the string2(Maximum 40 characters):\t");
	gets_s(string2,40);

	// Function call
	ptr=MyStrstr(string1,string2);

	if(ptr==NULL)
	{
		printf("\n\nstring is not found\t");
	}
	else
	{
		printf("\n\nstring is found at %d Loaction\n",(ptr-string1)+1);
		printf("\n\nstring is found In \t%s\n",ptr);
	}

	_getch();
	return 0;
}
char *MyStrstr(char *destination,char *key)
{
	int count=0,count1;

	//count1 variable is for destination string
	//count variable if for key/source string
	for(count1=0;destination[count1]!='\0';count1++)
	{
		if(key[count]==destination[count1])
		{
			if(key[count+1]=='\0')
			{
				return &destination[count1-count];
			}  
			count++;
		}
		else
		{
			// if string is not found it will again check from start
			count=0;
		}
	}
	return NULL; // if nothing is match it will return NULL
}
