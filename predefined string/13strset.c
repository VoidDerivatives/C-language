// set character (insensitive)
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char string[20];
	char ch;

	printf("\n\nEnter the string:\t");
	gets(string);
	printf("\n\nEnter the character:\t");
	scanf("%c",&ch);


	strset(string,ch);

	printf("\n\nNow string is:\t");
	puts(string);

	getch();
	return 0;
}

//o/P:Enter the string:       AISHU


//    Enter the character:    @


//      Now string is:  @@@@@