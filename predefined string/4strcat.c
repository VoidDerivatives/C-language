//String concatenation
#include<stdio.h>
#include<string.h>
int main(void)
{
	char destination[40];
	char source[20];

	printf("\n\nEnter the destination:\t");
	gets(destination);

	printf("\n\nEnter the source string:\t");
	gets(source);

	strcat(destination,source);

	printf("\n\nConcatenated string Is:\t");
	puts(destination);
	return 0;
}

//o/p:Enter the destination:  aishwraya


//    Enter the source string:        Bacche


//    Concatenated string Is: aishwraya Bacche
