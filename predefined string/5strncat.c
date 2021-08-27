// number of string/char concatination string 
#include<stdio.h>
#include<string.h>
int main(void)
{
	char destination[40];
	char source[20];
	int n;

	printf("\n\nEnter the destination:\t");
	gets(destination);

	printf("\n\nEnter the source string:\t");
	gets(source);

	printf("\n\nEnter the value:\t");
	scanf("%d",&n);

	strncat(destination,source,n);

	printf("\n\nConcatenated string Is:\t");
	puts(destination);
	return 0;
}

//o/P:Enter the destination:  Aishwarya


//    Enter the source string:        Bacche


//    Enter the value:        5


//      Concatenated string Is: AishwaryaBacch
