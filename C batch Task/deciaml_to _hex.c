#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
	int a[100],i;
	unsigned int number;
	int remainder,count=0;
	printf("enter the number which is only 4 in digit:");
	scanf_s("%d",&number);
	printf("%x\n",number);
	for(i=0;number!=0;i++)
	{
		remainder=number%16;
		number=number/16;
		a[i]=remainder;
		count++;
	}
    for(i=count-1;i>=0;i--)
	{
	switch(a[i])
		{
	case 10:printf("a");
		  break;
	case 11:printf("b");
		 break;
	case 12:printf("c");
		 break;
	case 13:printf("d");
		 break;
	case 14:printf("e");
		 break;
	case 15:printf("f");
		break;
	default:printf("%d",a[i]);
		}
	}
    _getch();
}