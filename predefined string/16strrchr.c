// find character from last and return the address 
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char str[20];
	char ch;
	char *ptr=NULL;

	printf("\n\nEnter the string:\t");
	gets(str);
	printf("\n\nEnter the character to be found:\t");
	scanf("%c",&ch);

	ptr=strrchr(str,ch);

	if(ptr==NULL)
	{
		printf("\n\nCharacter is not found:\t");
	}
	else
	{
		printf("\n\nCharacter is found at %d Loaction\n",(ptr-str)+1);
	}

	getch();
	return 0;
}


//o/p:
//Enter the string:       aishu


//Enter the character to be found:        s


//Character is found at 3 Loaction