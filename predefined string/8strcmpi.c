//strcmpi/stricmp/strcasecmp =insensitive
#include<stdio.h>
#include<string.h>
int main()
{
	char string1[20],string2[20];
	int ch;

	printf("\n\nEnter the strng1:\t");
	gets(string1);

	printf("\n\nEnter the string1:\t");
	gets(string2);

	ch=strcmpi(string1,string2);
	if(ch==0)
	{
		printf("\n\nBoth strings are equal\n");
	}
	else
	{
		printf("\n\nBoth string are not equal\n");
	}

	return 0;
}

//o/p:Enter the strng1:       Aishu


//    Enter the string1:      aishu


//    Both strings are equal