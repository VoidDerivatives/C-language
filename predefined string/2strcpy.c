// string copy
#include<stdio.h>
#include<string.h>
int main(void)
{
	char destination[20];
	char source[20];

	printf("\n\nEnter source string:");
	gets(source);
	printf("\n\nSource string Is:");
	puts(source);

	strcpy(destination,source);

	printf("\n\nDestination string Is:\t");
	puts(destination);

	return 0;
}

//o/p :Enter source string:Aishu Bacche
//     Source string Is:Aishu Bacche
//     Destination string Is:Aishu Bacche
