//number of character set string 
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char string[20];
	char ch;
	int n;

	printf("\n\nEnter the string:\t");
	gets(string);
	printf("\n\nEnter the character:\t");
	scanf("%c",&ch);
	printf("\n\nEnter the number:\t");
	scanf("%d",&n);

	strnset(string,ch,n);

	printf("\n\nNow string is:\t");
	puts(string);

	getch();
	return 0;
}

//o/p:Enter the string:       aishu


//    Enter the character:    &


//    Enter the number:       2


//    Now string is:  &&shu