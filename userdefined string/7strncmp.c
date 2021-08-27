// Date :20 august 2020
//
// Header files
//
#include<stdio.h>
#include<conio.h>
//
// Function declaration
//
int MyStrncmp(const char *,const char *,int);
//
// Function definition
// 
int main(void)
{
	int n;
	char string1[20];
	char string2[20];

	//Accept string1
	printf("\n\nEnter the string1 (Must be contain 20 character) :\t");
	gets_s(string1,20);

	//Accpect string2
	printf("\n\nEnter the string2(Must be contain 20 character) :\t");
	gets_s(string2,20);

	//Accept value
	printf("\n\nEnter the value:\t");
	scanf_s("%d",&n);


	if(MyStrncmp(string1,string2,n)==0)   //Function call and checking
	{
		 printf("\n\nBoth string Are same\n");
	}
	else
	{
		printf("\n\nBoth string Are different\n");
	}
	_getch();
	return 0;
}
int MyStrncmp(const char *string1,const char *string2,int n)
{
	int count;

	// number of character check only
	for(count=0;count<n;count++)
	{
		printf("%d",count);
		if(string1[count]!='\0' || string2[count]!='\0') // optimise for loop  
		{
			if(string1[count]!=string2[count])
				return 1;	//If not equal
		}
		else
			break;
	}

	return 0;  //If equal
   // If strings are equal 
}


