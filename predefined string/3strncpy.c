// number od string copy 
#include<stdio.h>
#include<string.h>
int main(void)
{
	int n;
	char source[20];
	char destination[20];

	printf("\n\nEnter the string:\t");
	gets(source);
	printf("\n\nEnter the value of n:\t");
	scanf_s("%d",&n);

	printf("\n\nsource string Is :\t");
	puts(source);

	strncpy(destination,source,n);

	printf("\n\ndestination string Is:\t");
	puts(destination);

	return 0;
}


