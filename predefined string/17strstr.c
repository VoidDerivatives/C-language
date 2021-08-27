//string find function
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char string1[20],string2[20];
	char *ptr=NULL;

	printf("\n\nEnter the string1:\t");
	gets(string1);
	printf("\n\nEnter the string2:\t");
	gets(string2);

	ptr=strstr(string1,string2);

	if(ptr==NULL)
	{
		printf("\n\nstring is not found:\t");
	}
	else
	{
		printf("\n\nstring is found at %d Loaction\n",(ptr-string1)+1);
		printf("\n\nstring is found in %s\n",ptr);
	}

	getch();
	return 0;
}
//o/p:Enter the string1:      I am AMit


//Enter the string2:      am


//string is found at 3 Loaction


//string is found In     am AMit