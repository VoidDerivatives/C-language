// string length
#include<stdio.h>
int main(void)
{
	char *p="Hello";
	char str[]="Good";

	printf("\n Length of the string p:%d",strlen(p));    //5
	printf("\n Length of the string str:%d",strlen(str));     //4
	printf("\n Length of the string morning:%d",strlen("morning"));   //7
	 return 0;
}

