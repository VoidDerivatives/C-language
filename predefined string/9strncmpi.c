// number of string comparison insensitive
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char string1[20],string2[20];
	int ch,n;

	printf("\n\nEnter the string1:\t");
	gets(string1);

	printf("\n\nEnter the string2:\t");
	gets(string2);

	printf("\n\nEnter the number:\t");
	scanf("%d",&n);

	ch=strcmpi(string1,string2);

	if(ch==0)
	{
		printf("Both strings are equal");
	}
	else
	{
		printf("Both strings are not equal");
	}
	getch();
	return 0;
}
//o/p:Enter the string1:      aishu


//    Enter the string2:      Aishu


//    Enter the number:       1
//    Both strings are equal