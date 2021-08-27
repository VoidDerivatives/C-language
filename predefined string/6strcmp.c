// string comaparison
#include<stdio.h>
#include<string.h>
int main(void)
{
	char string1[20];
	char string2[20];
	int ch;
	
	printf("\n\nEnter the string1:\t");
	gets(string1);

	printf("\n\nEnter the string2:\t");
	gets(string2);

	ch=strcmp(string1,string2);

	if(ch==0)
	{
		 printf("\n\nBoth string Are same\n");
	}
	else
	{
		printf("\n\nBoth string Are different\n");
	}
	return 0;
}

//o/p:Enter the string1:      aishu


//    Enter the string2:      aishu


//    Both string Are same