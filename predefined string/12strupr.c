//lower to upper
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char string[20];

	printf("\n\nEnter the string1:\t");
	gets(string);

	strupr(string);

	printf("\n\nReverse string is:\t");
	puts(string);

	getch();
	return 0;
}
//o/p:Enter the string1:      aishu


//    Reverse string is:      AISHU
