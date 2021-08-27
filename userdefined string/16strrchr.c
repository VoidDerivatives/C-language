// Date :22 august 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Fnction declaration
//
const char *MyStrrchr(const char *,char ch);
//
// Function definitions
//
int main()
{
	char string[20];
	char ch;
	const char *ptr=NULL;
	
	// Accept string from user
	printf("\n\nEnter the string (Maximum 20 characters):\t");
	gets_s(string,20);

	// Accept character from user
	printf("\n\nEnter the character to be found:\t");
	scanf_s("%c",&ch);

	ptr=MyStrrchr(string,ch);

	if(ptr==NULL)
	{
		printf("\n\nCharacter is not found\t");
	}
	else
	{
		printf("\n\nCharacter is found at %d Loaction\n",(ptr-string)+1);
	}

	_getch();
	return 0;
}
const char *MyStrrchr(const char *string,char ch)
{
	int count;
	for(count=0;string[count]!='\0';count++)
	{
	}
	// search from last 
	while(count>=0)
	{
		count--;
		if(string[count]==ch)
			return &string[count];
	}
	return NULL;
}


