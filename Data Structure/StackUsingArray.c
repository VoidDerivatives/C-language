#include<stdio.h>
#include<conio.h>
#define MAX 5
#define TRUE 1
#define FALSE 0

void Push(int *Pstack,int *top,int no);
int Pop(int *pstack,int *top);
int IsFull(int top);
int IsEmpty(int top);
void Display(int *pstack,int top);

int main(void)
{
	int stack[MAX];
	int top=-1;
	int data;
	int choice;
	
	do
	{
		printf("_____________________________________________");
		printf("\n1] push\n2] pop \n3] IsFull \n4] IsEmpty\n");
		printf("5] Exit\n\n");
		printf("Enter the choice:\t");
		scanf_s("%d",&choice);

		switch(choice)
		{
		case 1:if(IsFull(top))
			   {
				   printf("Stack Overflow\n");
				   break;
			   }
				printf("Enter the data:");
				scanf_s("%d",&data);
				Push(stack,&top,data);

				Display(stack,top);
				break;
		case 2:
				if(IsEmpty(top))
				{
					printf("Stack is Empty");
					break;
				}
				data = Pop(stack,&top);
				if(data != -1)
					printf("Popped data is:\t%d\n",data);

				Display(stack,top);
					break;
		case 3: data = IsFull(top);
				if(data)
					printf("\nstack is FULL\n");
				else
					printf("\nstack is not fULL\n");

					Display(stack,top);
				break;
		case 4:data = IsEmpty(top);
				if(data)
					printf("\nstack is Empty\n");
				else
					printf("\nstack is not Empty\n");

					Display(stack,top);
				break;
		case 5: break;
		default:printf("\nYour choice is wrong\n");
			break;
		}
	}while(choice != 5);
	
	_getch();
	return 0;
}
void Push(int *Pstack,int *top,int no)
{
	if(IsFull(*top))
	{
		printf("Stack is FULL");
		return ;
	}

	Pstack[++(*top)] = no;

}
int Pop(int *pstack,int *top)
{
	if(IsEmpty(*top))
	{
		printf("stack is Empty");
		return -1;
	}

	return pstack[(*top)--];

}
int IsFull(int top)
{
	if(top == MAX-1)
		return TRUE;
	return FALSE;
}
int IsEmpty(int top)
{
	if(top == -1)
		return TRUE;
	return FALSE; 
}
void Display(int *pstack,int top)
{
     int counter;
	 if(top == -1)
	 {
		 printf("Stack is Empty\n");
		 return ;
	 }
	 for(counter = 0;counter <=top;counter++)
	 {
		 printf("|%d|",pstack[counter]);
	 }
	 printf("\n");

}
