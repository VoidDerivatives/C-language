//date :19 sept 2020
//
// Header files
//
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
//
// struture declaration
//
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
//
// Function declaration
//
void InsertLast(struct node **,int);
void InsertFirst(struct node **,int);
void InsertAtPosition(struct node **,int,int);    
int DeleteFirstNode(struct node **);
int DeleteLastNode(struct node **); 
int DeleteAtPosition(struct node **,int);
int SearchFirstOccurance(struct node *,int);
int SearchLastOccurance(struct node *,int);
int SearchAllOccurance(struct node *,int);
void PhysicalReverse(struct node **);
void ReverseDisplay(struct node *);
void ConcatList(struct node **,struct node **);
void ConcatAtPosition(struct node **,struct node **,int);
void display(struct node *);
int CountNode(struct node *);
void DeleteAllNode(struct node **);
//
// Function definitions
//
int main(void)
{
	struct node *first=NULL;
	struct node *second=NULL;
	int pos;
	int pos1;
	int choice;
	int data;
	int choice1;
	int count;

	BACK:do
	{
		printf("\n1]Insert First \n2]Insert Last \n3]Insert At Position\n");
		printf("4]Delete First \n5]Delete Last \n6]Delete At Position\n");
		printf("7]search First Occurance \n8]search Last Occurance \n9]search All Occurance\n");
		printf("10]physical Reverse \n11]Reverse Display\n");
		printf("12]concat List \n13]Concat At position\n");
		printf("14]Total count \n");
		printf("15]Exit");

		printf("\n\n_______________________________________\n\n");
		printf("\nEnter Your choice:\t");
		scanf_s("%d",&choice);

		switch(choice)
		{
			case 1: printf("_____________________________________\n");
				
					printf("Enter the data:\t");
					scanf_s("%d",&data);
					InsertFirst(&first,data);
					
					display(first);
					printf("_____________________________________\n");
					break;

			case 2: printf("_____________________________________\n");
					printf("Enter the data:\t");
					scanf_s("%d",&data);
					InsertLast(&first,data);
					
					display(first);
					printf("_____________________________________\n");
					break;

			case 3: printf("_____________________________________\n");
					
					printf("Enter the position:\t");
					scanf_s("%d",&pos);
					
					count = CountNode(first);
	
					if(pos <= 0 || count+1 < pos)
					{
						printf("Position is Invalid\n");
						break;
					}
					printf("Enter the data:\t");
					scanf_s("%d",&data);
					
					InsertAtPosition(&first,data,pos);
					
					display(first);
					printf("\n_____________________________________\n");
					break;
			case 4:	printf("_____________________________________\n");
					
					if(first == NULL)
					{
						printf("List is Empty\n");
						break;
					}
					data = DeleteFirstNode(&first);
				
					printf("Your deleted Data is:\t%d\n",data);
					
					display(first);
					printf("_____________________________________\n");
					break;

			case 5: printf("_____________________________________\n");
					
					if(first == NULL)
					{
						printf("List is Empty\n");
						break;
					}
				    data = DeleteLastNode(&first);
			
					printf("Your deleted Data is:\t%d\n",data);
					
					display(first);
					printf("_____________________________________\n");
					break;

			case 6: printf("_____________________________________\n");
					
					if(first == NULL)
					{
						printf("List is Empty\n");
						break;
					}
				    printf("Enter the position which to be deleted:");
					scanf_s("%d",&pos);
					
					count = CountNode(first);
	
					if(pos <= 0 || count < pos)
					{
						printf("Position is Invalid");
						break;
					}
					data = DeleteAtPosition(&first,pos);
				
					printf("Your deleted Data is:\t%d\n",data);
					
					display(first);
					printf("_____________________________________\n");
					break;

			case 7: printf("_____________________________________\n");
					
					if(first == NULL)
					{
						printf("List is Empty\n");
						break;
					}
					printf("Enter the data which to be search At first Occurance:\t");
					scanf_s("%d",&data);
					
					pos = SearchFirstOccurance(first,data);

					if(pos == 0)
						printf("Data not found\n");
					else
						printf("Data is found at \"%d\"  position.\n",pos);
					
					printf("_____________________________________\n");
					break;

			case 8:	printf("_____________________________________\n");
					
					if(first == NULL)
					{
						printf("List is Empty\n");
						break;
					}
					printf("Enter the data which to be search At Last Occurance:\t");
					scanf_s("%d",&data);
					
					pos = SearchLastOccurance(first,data);
					if(pos == 0)
						printf("Data not found\n");
					else
						printf("Data is found at \"%d\" position.\n",pos);
					
					printf("_____________________________________\n");
					break;

			case 9:printf("_____________________________________\n");
					
					if(first == NULL)
					{
						printf("List is Empty\n");
						break;
					}
					printf("Enter the data which to be search All (count)Occurance:\t");
					scanf_s("%d",&data);
					
					pos = SearchAllOccurance(first,data);
					
					if(pos == 0)
						printf("Data not found\n");
					else 
						printf("Total count Is:\t%d\n",pos);
					 
					printf("_____________________________________\n");
					break;

			case 10:printf("_____________________________________\n");
				
					if(first == NULL)
					{
						printf("List is Empty\n");
						break;
					}
					PhysicalReverse(&first);
					
					display(first);
					printf("_____________________________________\n");
					break;

			case 11:printf("_____________________________________\n");
				
					if(first == NULL)
					{
						printf("List is Empty\n");
						break;
					}
					ReverseDisplay(first);

					printf("_____________________________________\n");
					break;

			case 13: printf("Enter the position:\t");
					 scanf_s("%d",&pos);
					 
					count = CountNode(first);
	
					if(pos <= 0 || count+1 < pos)
					{
						printf("Position is Invalid");
						break;
					}
					
					 // jar user concate list n karta concate At position kel tr mhun hi condition
					 // without break statement pudhchya case madhe jaun second list ghenar
					 // here optimise switch case 
					 
			case 12:printf("_____________________________________\n");
						
					if(second==NULL) // concate list kel tr again check 
					{
						printf("Your second list is empty so\n");
						printf("Enter the second list:\n");
					do
					{
						printf("1]Insert First \n2]Insert Last \n3]Insert At Position\n");
						printf("4]Go Back to the main menu\n");
						printf("5]Select these option for result\n");
						
						printf("\nEnter your choice:\t");
						scanf_s("%d",&choice1);
						
						switch(choice1)
						{
	
							case 1: printf("_____________________________________\n");
									
									printf("Enter the data:\t");
									scanf_s("%d",&data);
									InsertFirst(&second,data);
									
									display(second);
									printf("_____________________________________\n");
									break;
							case 2: printf("_____________________________________\n");
									
									printf("Enter the data:\t");
									scanf_s("%d",&data);
									InsertLast(&second,data);
									
									display(second);
									printf("_____________________________________\n");
									break;
							case 3: printf("_____________________________________\n");
								  
									printf("Enter the position:\t");
									scanf_s("%d",&pos1);
									
									count = CountNode(second);
	
									if(pos1 <= 0 || count+1 < pos1)
									{
										printf("Position is Invalid");
										break;
									}		
									printf("Enter the data:\t");
									scanf_s("%d",&data);
									InsertAtPosition(&second,data,pos1);
									
									display(second);
									printf("_____________________________________\n");
									break;
							case 4:	goto BACK;
								
							case 5: break;
							default:printf("Your choice is Invalid\n");
									break;

							}
					}while(choice1!=5);
					}
						if(choice==13)
						{
							ConcatAtPosition(&first,&second,pos);
							printf("***concat At position***\n");
						}
						else
						{
							printf("***Your concat list are***\n");
							ConcatList(&first,&second);
						}
						display(first);
						printf("_____________________________________\n");
							break;

			case 14:printf("_____________________________________\n");
					
					data=CountNode(first);
					printf("Your count is:\t%d\n",data);
					display(first);
					
					printf("_____________________________________\n");
					break;

			case 15: printf("_____________________________________\n"); 
				
					if(first == NULL)
					{
						printf("List is Empty");
						break;
					}
					 DeleteAllNode(&first);

					 printf("_____________________________________\n");
					 break;

			default: printf("_____________________________________\n"); 
					 printf("Your case is Invalid");
					 break;
		}
	}while(choice!=15);

	_getch();
	return 0;

}
void InsertLast(struct node **head,int no)
{
	struct node *newnode = NULL;
	struct node *temp = NULL;

	newnode = (struct node*)malloc(sizeof(struct node));
	
	if(newnode == NULL)
	{
		printf("Memory allocation Failed");
		return ;
	}

	newnode->data = no;
	newnode->next = NULL;

	if(*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
		return;
	}

	temp = *head;
	while(temp->next != NULL)
		temp = temp->next;
	
	temp->next = newnode;
	newnode->prev = temp;
	//sanskar
	temp=NULL;
	newnode=NULL;
}
void InsertFirst(struct node **head,int no)
{
	struct node *newnode = NULL;

	newnode = (struct node*)malloc(sizeof(struct node));
	
	if(newnode == NULL)
	{
		printf("Memory allocation Failed");
		return ;
	}

	newnode->data = no;
	newnode->prev = NULL;

	if(*head==NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return ;
	}

	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	//sanskar
	newnode=NULL;

}
void InsertAtPosition(struct node **head,int no,int pos)
{
	int count;
	struct node *newnode = NULL;
	struct node *temp = NULL;

	newnode = (struct node*)malloc(sizeof(struct node));
	count=CountNode(*head);
	if(newnode == NULL)
	{
		printf("Memory allocation Failed");
		return ;
	}

	if(pos == 1)
	{
		InsertFirst(head,no);
		return ;
	}

	if(pos == count+1)
	{
		InsertLast(head,no);
		return ;
	}

	newnode->data=no;
	count = 1;
	temp = *head;
	while(count < pos-1)
	{
		count++;
		temp = temp->next;
	}

	newnode->next=temp->next;
	temp->next->prev=newnode;
	newnode->prev=temp;
	temp->next=newnode;

	temp=NULL;
	newnode=NULL;

}
int DeleteFirstNode(struct node **head)
{
	int data;
	
	if(*head == NULL)
	{
		printf("List is Empty");
		return -1;
	}
	data = (*head)->data;

	if((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
	*head = (*head)->next;
	(*head)->prev->next = NULL;
	free((*head)->prev);
	(*head)->prev = NULL;
	}
	return data; 
}
int DeleteLastNode(struct node **head)
{
	struct node *temp = NULL;
	int data;
	
	if(*head == NULL)
	{
		printf("List is Empty");
		return -1;
	}
	temp = *head;
	while(temp->next != NULL)
		temp = temp->next;

	data = temp->data;

	if(temp->prev == NULL)
	{
		*head = NULL;
	}
	else
	{
	temp->prev->next = NULL;
	temp->prev = NULL;
	}

	free(temp);
	temp=NULL;
	return data;
}
int DeleteAtPosition(struct node **head,int pos)
{
	int count;

	struct node *temp = NULL;
	
	if(*head == NULL)
	{
		printf("List is Empty");
		return -1;
	}
	count=CountNode(*head);
	if(pos == 1)
	{
		return DeleteFirstNode(head);
	}

	if(pos == count)
	{
		return DeleteLastNode(head);
	}

	temp = *head;
	count=1;
	while(count < pos)
	{
		count++;
		temp = temp->next;
	}
	 
	 count = temp->data;
	 temp->prev->next = temp->next;
	 temp->next->prev = temp->prev;
	 temp->next = NULL;
	 temp->prev = NULL;

	 free(temp);
	 temp = NULL;
	  return count;             // data = count variable is used
}
int SearchFirstOccurance(struct node *head,int key)
{
	int pos = 0;
	
	if(head == NULL)
	{
		printf("List is Empty");
		return -1;
	}
	while(head != NULL)
	{
		pos++;
		if(head->data == key)
			break;
		head = head->next;
	}

	if(head == NULL)
		pos = 0;
	return pos;

}
int SearchLastOccurance(struct node *head,int key)
{
	int pos = 0;
	int lastpos = pos;
	
	if(head == NULL)
	{
		printf("List is Empty");
		return -1;
	}
	while(head != NULL)
	{
		pos++;
		if(head->data == key)
			lastpos = pos;
		head = head->next;
	}
	return lastpos;
}
int SearchAllOccurance(struct node *head,int key)
{
	int count = 0;
	
	if(head == NULL)
	{
		printf("List is Empty");
		return -1;
	}
	while(head != NULL)
	{
		if(head->data == key)
			count++;
		head = head->next;
	}
	return count;
}
void PhysicalReverse(struct node **head)
{
	struct node *PREV = NULL;
	struct node *current = *head;
	struct node *NEXT = NULL;
	
	if(*head == NULL)
	{
		printf("List is Empty");
		return ;
	}
	while(current != NULL)
	{
		NEXT = current->next;
		current->next = PREV;
		current->prev = NEXT;
		PREV = current;
		current = NEXT;
	}
	*head = PREV;
}
void ReverseDisplay(struct node *head)
{
	if(head == NULL)
	{
		printf("List is Empty");
		return ;
	}
	while(head->next != NULL)
	{
		head = head->next;
	}

	while(head)
	{
		printf("<-|%d|->",head->data);
		head = head->prev;
	}
}
void ConcatList(struct node **head1,struct node **head2)
{
	struct node *temp = NULL;
	if(*head2 == NULL)
	{
		return ;
	}
	if(*head1 == NULL)
	{
		*head1 = *head2;
		*head2 = NULL;
		return ;
	}
	temp = *head1;
	
	while(temp->next != NULL)
		temp = temp->next;
	
	temp->next = *head2;
	(*head2)->prev = temp;
	*head2 = NULL;
	temp = NULL;

}
void ConcatAtPosition(struct node **head1,struct node **head2,int pos)
{

	int count;
	struct node *temp1 = NULL;
	struct node *temp2 = NULL;
	if(*head2 == NULL)
		return;

	if(pos == 1)
	{
		ConcatList(head2,head1);
		*head1 = *head2;
		*head2 = NULL;
		return ;
	}

	temp1 = *head1;
	temp2 = *head2;
	count = 1;
	while(count<pos-1)
	{
		count++;
		temp1 = temp1->next;
	}
	count = CountNode(*head1);
	if(pos-1 == count)
	{
		temp1->next=temp2;
		temp2->prev=temp1;
		*head2 = NULL;
		return ;
	}
	
	while(temp2->next != NULL)    
	temp2 = temp2->next;

	temp2->next = temp1->next;
	temp1->next->prev = temp2;
	temp1->next = *head2;
	(*head2)->prev = temp1;
	
	*head2 = NULL;
	//temp1 = NULL;
	//temp2 = NULL;

}
void display(struct node *head)
{
	printf("\n\n**** Doubly Linked List ****\n\n");
	if(head == NULL)
	{
		printf("List is Empty\n");
		return;
	}
	while(head != NULL)
	{
		printf("<-|%d|->",head->data);
		head = head->next;
	}
	printf("\n");
}
int CountNode(struct node *head)
{
	int count = 0;
	
	while(head != NULL)
	{
		count++;
		head = head->next;
	}
	return count; 
}
void DeleteAllNode(struct node **head)
{
	struct node *temp = NULL;
	
	if(*head == NULL)
	{
		printf("List is Empty");
		return ;
	} 
	while(*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		temp->next = NULL;
		temp->prev=NULL;
		free(temp);
		temp=NULL;
	}
	printf("Deleted all nodes successfully\n");
}