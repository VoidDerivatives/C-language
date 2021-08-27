#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define MAX 5
#define  TRUE 1
#define FALSE 0
void Push(struct stack **,int);
int Pop(struct stack **);
int CountNode(struct stack *);
int IsEmpty(struct stack *head);
int IsFULL(struct stack *head);
void Display(struct stack *);
void DeleteAllNode(struct stack **head);
struct stack 
{
	int data;
	struct stack *next;
};
int main(void)
{
	struct stack *first = NULL;
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
		case 1:if(IsFULL(first))
			   {
				   printf("Stack Overflow\n");
				   break;
			   }
				printf("Enter the data:");
				scanf_s("%d",&data);
				Push(&first,data);

				Display(first);
				break;
		case 2:
				if(IsEmpty(first))
				{
					printf("Stack is Empty");
					break;
				}
				data = Pop(&first);
				if(data != -1)
					printf("Popped data is:\t%d\n",data);

				Display(first);
				break;
		case 3: data = IsFULL(first);
				if(data)
					printf("\nstack is FULL\n");
				else
					printf("\nstack is Empty\n");

				Display(first);
				break;
		case 4:data = IsEmpty(first);
				if(data)
					printf("\nstack is Empty\n");
				else
					printf("\nstack is not Empty\n");

				Display(first);
				break;
		case 5:DeleteAllNode(&first);
			break;

		default:printf("\nYour choice is wrong\n");
			break;
		}
	}while(choice != 5);
	_getch();
	return 0;
}
void Push(struct stack **head,int no)
{
	struct stack *newnode = NULL;
	if(IsFULL(*head))
	{
		printf("Stack Overflow");
		return ;
	}
	newnode = (struct stack *)malloc(sizeof(struct stack));
	if(newnode == NULL)
	{
		printf("Memory allocation failed");
		return;
	}
	newnode -> data = no;
	if(*head == NULL)    //only one node
	{
		*head = newnode ;
		newnode ->next = NULL;
		return ;
	}

	newnode->next = *head;
	*head = newnode;
	newnode = NULL;
}
int Pop(struct stack **head)
{
	struct stack *temp = NULL;
	int del_data;
	if(IsEmpty(*head))
	{
		printf("stack is Empty");
		return -1;
	}

	temp = *head;
	del_data = temp -> data;
	*head = (*head) -> next;
	temp->next = NULL;
	free(temp);
	temp = NULL;
	return del_data;

}
int IsEmpty(struct stack *head)
{
	if(head == NULL)
		return TRUE;
	return FALSE;
}
int IsFULL(struct stack *head)
{
	if(CountNode(head) == MAX)
		return TRUE;
	return FALSE;
		
}
int CountNode(struct stack *head)
{
	int count=0;
	while(head != NULL)
	{
		count++;
		head = head -> next;
	}
	return count;
}
void Display(struct stack *head)
{
	if(head == NULL)
	{
		printf("stack is Empty\n");
		return ;
	}
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head = head -> next;
	}
	printf("\n");
}
void DeleteAllNode(struct stack **head)
{
	struct stack *temp = NULL;
	if(*head == NULL)
	{
		printf("stack is empty");
		return ;
	}
	while(*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		temp->next = NULL;
		free(temp);
	}
	printf("\nDeleted successfully\n");
}