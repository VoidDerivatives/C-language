// number of string String comparision
#include<stdio.h>
#include<string.h>
int main(void)
{
	char string1[20];
	char string2[20];
	int ch;
	int n;
	
	printf("\n\nEnter the string1:\t");
	gets(string1);

	printf("\n\nEnter the string2:\t");
	gets(string2);

	printf("\n\nEnter the value:\t");
	scanf("%d",&n);

	ch=strncmp(string1,string2,n);

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

//o/p: Enter the string1:      aishu


       Enter the string2:      asb


       Enter the value:        3


       Both string Are different
