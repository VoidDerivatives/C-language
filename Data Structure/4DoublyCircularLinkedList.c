	
// date : 16/10/2020
//
// header files
//
#include<stdio.h>
#include<malloc.h>
//
// structure declaration
//
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
//
// Function Declaration
//
void InsertFirst(struct node **,struct node **,int);
void InsertLast(struct node **,struct node **,int);
void InsertAtPosition(struct node **,struct node **,int,int);
int DeleteFirstNode(struct node **,struct node **);
int DeleteLastNode(struct node **,struct node **);
int DeleteAtPosition(struct node **,struct node **,int);
int SerachFirstOccurance(struct node *,struct node *,int);
int SerachLastOccurance(struct node *,struct node *,int);
int SerachAllOccurance(struct node *,struct node *,int);
void ConcatList(struct node **,struct node **,struct node **,struct node **);
void ConcatAtPosition(struct node **,struct node **,struct node **,struct node **,int);
void PhysicalReverse(struct node **,struct node **);
void ReverseDisplay(struct node *,struct node *);
void PhysicalReverse(struct node **,struct node **);
int CountNode(struct node *,struct node *);
void DeleteAllNode(struct node **,struct node **);
void display(struct node *,struct node *);
//
// Function definition
//
int main(void)
{
	struct node *first = NULL;
	struct node *last = NULL;
	struct node *second = NULL;
	struct node *last1 = NULL;
	int pos;
	int pos1;
	int data;
	int count;
	int choice;
	int choice1;
	int choice2;

	do
	{
		printf("___________________________________________________________\n");
		printf("\t\t\tMain Menu\t\t\t\n");
		printf("___________________________________________________________\n");
		printf("\t\t1] Insert\n");
		printf("\t\t2] Delete\n");
		printf("\t\t3] Search\n");
		printf("\t\t4] Reverse\n");
		printf("\t\t5] Concate\n");
		printf("\t\t6] Count\n");
		printf("\t\t7] Exit\n");

		printf("\nEnter Your choice:\t");
		scanf("%d",&choice);
		
		if(choice == 2 || choice == 3 || choice == 4 || choice ==7)
			if(first == NULL)
			{
				printf("List is Empty\n\n");
				continue;
			}
		switch(choice)
		{
			case 1:	printf("_____________________________________\n");
					do
					{
						printf("1] Insert First \n2] Insert Last\n3] Insert At Position\n");
						printf("4] Back\n");
						printf("\nEnter the choice:\t");
						scanf("%d",&choice1);

						switch(choice1)
						{
						case 1: printf("_____________________________________\n");
							    printf("Enter the data:\t");
								scanf("%d",&data);
								InsertFirst(&first,&last,data);
					
								break;

						case 2: printf("_____________________________________\n");
					
								printf("Enter the data:\t");
								scanf("%d",&data);
								InsertLast(&first,&last,data);
					
								break;

						case 3: printf("_____________________________________\n");
		
								printf("Enter the position:\t");
								scanf("%d",&pos);
					
								count=CountNode(first,last);
								if(pos<=0  || count+1<pos)
								{
									printf("Position is Invaild\n\n");
									break;
								}
								printf("Enter the data:\t");
								scanf("%d",&data);
					
								InsertAtPosition(&first,&last,pos,data);
					
								break;
						case 4: break;
						default :printf("choice is Invaild\n\n");
								break;
						}
					display(first,last);
					printf("_____________________________________\n");	
					}while(choice1 != 4);
					break;

			case 2:	printf("_____________________________________\n");	
					do
					{
						printf("1] Delete First\n2] Delete Last\n3] Delete At Position\n");
						printf("4] Back\n");
						printf("\nEnter the choice:\t");
						scanf("%d",&choice1);

						switch(choice1)
						{

							case 1:printf("_____________________________________\n");
					
									data = DeleteFirstNode(&first,&last);
					
									printf("Your deleted Data is:\t%d\n",data);

								
									break;

							case 2: printf("_____________________________________\n");
									
									data = DeleteLastNode(&first,&last);
				
									printf("Your deleted Data is:\t%d\n",data);
					
									break;

							case 3: printf("_____________________________________\n");
									
									printf("Enter the position which to be deleted:\t");
									scanf("%d",&pos);
				
									count=CountNode(first,last);
									if(pos<=0  || count<pos)
									{
										printf("Position is Invaild\n\n");
										break;
									}
									data = DeleteAtPosition(&first,&last,pos);
					
									printf("Your deleted Data is:\t%d\n",data);
					
									break;
							case 4:break;
							default:printf("choice is Invaild\n\n");
									break;
							}
						display(first,last);
						printf("_____________________________________\n");
					}while(choice1 != 4);
						break;

			case 3:	printf("_____________________________________\n");
					do
					{
						printf("1] Serach First occurance\n");
						printf("2] search Last Occarance\n");
						printf("3] Search All Occuarance\n");
						printf("4] back\n");
						
						printf("\nEnter the choice:\t");
						scanf("%d",&choice1);

						switch(choice1)
						{
						case 1:	printf("_____________________________________\n");
								
								printf("Enter the data which to be search At first Occurance:\t");
								scanf("%d",&data);
					
								pos = SerachFirstOccurance(first,last,data);
		
								if(pos == 0)
									printf("Data not found\n");
								else
									printf("Data is found at \"%d\" position.\n",pos);
						
								break;
	
						case 2:	printf("_____________________________________\n");
							
							printf("Enter the data which to be search At Last Occurance:\t");
							scanf("%d",&data);
					
							pos = SerachLastOccurance(first,last,data);
					
							if(pos == 0)
								printf("Data not found\n");
							else 
							  printf("Data is found at \"%d\" position.\n",pos);
					
							break;

						case 3:printf("_____________________________________\n");
							
							printf("Enter the data which to be search All (count)Occurance:\t");
							scanf("%d",&data);
					
							pos = SerachAllOccurance(first,last,data);
						
							if(pos == 0)
								printf("Data not found\n");
							else
								printf("Total count Is:\t%d\n",pos);
					 
							break;
					case 4:break;
					default:printf("choice is Invaild");
						break;
						}
						
							display(first,last);
							printf("_____________________________________\n");
					}while(choice1 != 4);
						break;

			case 4:	printf("_____________________________________\n");
				do
				   {
					   printf("1] Physical Reverse\n");
					   printf("2] Reverse Display\n");
					   printf("3] Back\n");
					   
					   printf("\nEnetr the choice:\t");
					   scanf("%d",&choice1);

					   switch(choice1)
					   {
					   case 1:printf("_____________________________________\n");
							
							PhysicalReverse(&first,&last);
							display(first,last);
							break;

					   case 2:printf("_____________________________________\n");
							
							ReverseDisplay(first,last);

							break;
					   case 3:break;
					   default:printf("choice is Invaild\n\n");
							   break;
					   }
					   
		
							printf("_____________________________________\n");
				   }while(choice1 != 3);
					   break;

			case 5:	printf("_____________________________________\n");
					do
					{
						choice1 =0;
						printf("1] concat List\n");
						printf("2] concat At position\n");
						printf("3] Back\n");
						
						printf("Enter the choice:\t");
						scanf("%d",&choice2);
				
						switch(choice2)
						{
						case 2: printf("_____________________________________\n");
								printf("Enter the position:\t");
								scanf("%d",&pos);
					
								count=CountNode(first,last);
								if(pos<=0  || count+1<pos)
								{
									printf("Position is Invaild\n\n");
									break;
								}
					 // jar user ne directly concate at position selete kel tr?
					 // tya sathi khalil logic
					 // accpect second list in 'case 12'
						case 1:printf("_____________________________________\n");
								if(second == NULL)
								{
									printf("Your second list is empty\n");
									printf("****Enter the second list****\n");
								do
								{
									printf("\n\n1]Insert First \n2]Insert Last \n3]Insert At Position \n");
									printf("4]go Back to main menu \n");
									printf("5]go back to the concat menu\n");
									printf("6]select these option for result\n");
						
									printf("\nEnter your choice:\t");
									scanf("%d",&choice1);
						
									switch(choice1)
									{
		
										case 1: printf("_____________________________________\n");
						
											printf("Enter the data:\t");
											scanf("%d",&data);
											InsertFirst(&second,&last1,data);
					
											break;
										case 2: printf("_____________________________________\n");
							
											printf("Enter the data:\t");
											scanf("%d",&data);
											InsertLast(&second,&last1,data);
								
												break;
										case 3: printf("_____________________________________\n");
									
												printf("Enter the position:\t");
												scanf("%d",&pos1);
												count=CountNode(second,last1);
												if(pos1<=0  || count+1<pos1)
												{
													printf("Position is Invaild\n\n");
													break;
												}
										
												printf("Enter the data:\t");
												scanf("%d",&data);
												InsertAtPosition(&second,&last1,pos1,data);
									
												break;	
										case 4:
										case 5: 
										case 6: break;  //directly break for concate list
										default:printf("Your choice is Invalid please select correct one\n");

										}
										if(choice1 == 4 || choice1 == 5)
											break;
										
										display(second,last1);
										printf("_____________________________________\n");
								}while(choice1!=6);
							}	
								if(choice1 == 4 || choice1 == 5)
									break;
						
								if(choice2 == 2)
								{
									ConcatAtPosition(&first,&last,&second,&last1,pos);
									printf("***Concate At position***\n");
								}
								else 
								{
									printf("***Your concat list are***\n");
									ConcatList(&first,&last,&second,&last1);
				 				}
								
								display(first,last);
								printf("_____________________________________\n");
								break;
						case 3:break;
						default:printf("choice is Invalid");
							break;
					}
						if(choice1 == 4)
								break;
					}while(choice2 != 3);
					break;

			case 6:printf("_____________________________________\n");
					display(first,last);
					
					data=CountNode(first,last);
					
					printf("Total count is:\t%d\n",data);
					
					break;

			case 7: printf("_____________________________________\n");
				
					 DeleteAllNode(&first,&last);

					 printf("_____________________________________\n");
					 break;

			default: printf("_____________________________________\n\n"); 
					 
					printf("choice is Invalid\n\n");
					
					break;
		}
	}while(choice != 7);

	return 0;
}
void InsertFirst(struct node **head,struct node **tail,int no)
{
	struct node *newnode = NULL;

	newnode = (struct node *)malloc(sizeof(struct node));

	if(newnode == NULL)
	{
		printf("Memory allocation failed");
		return ;
	}
	newnode -> data = no;
	if(*head == NULL)
	{
		*head = newnode;
		*tail = newnode;
	}
	else
	{
	newnode -> next = *head;
	(*head) -> prev = newnode;
	*head = newnode ;
	}
	(*tail) -> next = *head;   //circular effect
	(*head) -> prev = *tail;   // circular effect
	newnode = NULL;
}
void InsertLast(struct node **head,struct node **tail,int no)
{
	struct node *newnode = NULL;

	newnode = (struct node *)malloc(sizeof(struct node));

	if(newnode == NULL)
	{
		printf("Memory allocation failed");
		return ;
	}
	newnode -> data = no; 
	
	if(*head == NULL)
	{
		*head = newnode;
		*tail = newnode;
	}
	else
	{
		(*tail) -> next = newnode;
		newnode -> prev = *tail;
		*tail = newnode ;
	}
	(*tail) -> next = *head;   //circular effect
	(*head) -> prev = *tail;   // circular effect
}
void InsertAtPosition(struct node **head,struct node **tail,int pos,int no)
{
	struct node *newnode = NULL;
	struct node *temp = NULL;
	int count ;
	 
	newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("Memory allocation failed");
		return ;
	}
	newnode -> data = no;

	if(pos == 1)
	{
		InsertFirst(head ,tail,no);
		return ;
	}
	
	count = CountNode(*head,*tail);
	if(pos == count + 1)
	{
		InsertLast(head,tail,no);
		return ;
	}

	temp = *head;
	count = 1;

	while(count < pos - 1 )
	{
		count++;
		temp = temp -> next;
	}
	newnode -> next = temp ->next;
	temp -> next -> prev = newnode;
	temp -> next = newnode;
	newnode -> prev = temp;

	//sanskar
	newnode = NULL;
 	temp = NULL;
}
int DeleteFirstNode(struct node **head,struct node **tail)
{
	int del_data;
	if(*head == NULL)
	{
		printf("List is Empty\n");
		return -1;
	}
	del_data = (*head) -> data;
	
	if(*head == *tail)
	{
		(*head) -> next = NULL;
		(*head) -> prev = NULL;
		free(*head);
		*head = *tail = NULL;
	}
	else
	{
		*head = (*head) -> next;
		(*tail) -> next -> next = NULL;
		(*tail) -> next -> prev = NULL;
		free((*tail) -> next);
		(*tail) -> next = *head;
		(*head) -> prev = *tail;
	}
	return del_data;

}
int DeleteLastNode(struct node **head,struct node **tail)
{
	int del_data;
	if(*head == NULL)
	{
		printf("List is empty");
		return -1;
	}
	del_data = (*tail)-> data;

	if(*head == *tail)
	{
		(*head) -> next = NULL;
		(*head) -> prev = NULL;
		free(*head);
		*head = *tail = NULL;
	}
	else
	{
		*tail = (*tail) -> prev;
		(*tail) -> next ->next = NULL;
		(*tail) -> next -> prev= NULL;
		free((*tail) -> next);
		(*tail) -> next = *head;
		(*head) -> prev =*tail;
	}
	return del_data;

}
int DeleteAtPosition(struct node **head,struct node **tail,int pos)
{	
	int del_data;
	struct node *temp = NULL;
	int count;
	
	if(*head == NULL)
	{
		printf("List is empty");
		return -1;
	}

	if(pos == 1)
	{
		return DeleteFirstNode(head,tail);
	}

	temp = *head;
	count = 1;

	while(count < pos)
	{
		count++;
		temp = temp -> next;
	}
	del_data = temp -> data;

	count = CountNode(*head,*tail);

	if(pos == count)
		*tail = temp->prev;
	
	temp -> prev -> next = temp -> next;
	temp -> next -> prev = temp -> prev;

	temp -> next  = NULL;
	temp -> prev = NULL;
	
	free(temp);
	temp = NULL;
	return del_data;
	 
}  
int SerachFirstOccurance(struct node *head,struct node *tail,int key)
{
	int pos = 0;
	if(head == NULL)
		return pos;

	do
	{
		pos++;
		if(head ->data == key)
			return pos;
		head = head -> next;
	}while(head != tail->next);
	return 0;
}
int SerachLastOccurance(struct node *head,struct node *tail,int key)
{
	int pos = 0;
	int lastpos = 0;

	if(head == NULL)
		return pos;
	do
	{
		pos++;
		if(head ->data == key)
			lastpos = pos;
		head = head -> next;
	}while(head != tail->next);

	return lastpos;

}
int SerachAllOccurance(struct node *head,struct node *tail,int key)
{
	int count = 0;

	if(head == NULL)
		return count;
	do
	{
		if(head ->data == key)
			count++;
		head = head -> next;
	}while(head != tail->next);

	return count;
}
void ConcatList(struct node **head1,
				struct node **tail1,
				struct node **head2,
				struct node **tail2)
{
	if(*head2 == NULL)
		return ;

	if(*head1 == NULL)
	{
		*head1 = *head2;
		*tail1 = *tail2;
		*head2 = *tail2 = NULL;
		return;
	}

	(*tail1) -> next = *head2;
	(*head2) -> prev = *tail1;
	(*tail2) -> next = *head1;
	(*head1) -> prev = *tail2;
	*tail1 = *tail2;
	*head2 = *tail2 = NULL;
}
void ConcatAtPosition(struct node **head1,
					struct node **tail1,
					struct node **head2,
					struct node **tail2,
					int pos)
{
	struct node *temp = NULL;
	int count;
	count = CountNode(*head1,*tail1);

	if(*head2 == NULL)
		return ;
	if(pos == 1)
	{
		ConcatList(head2,tail2,head1,tail1);
		*head1 = *head2;
		*tail1 = *tail2;
		*head2 = NULL;
		*tail2 = NULL;
		return ;
	}
	temp = *head1;
	count = 1;
	while(count < pos -1)
	{
		count++;
		temp = temp->next;
	}
	if(temp == *tail1)
		*tail1 = *tail2; 
	(*tail2) -> next = temp -> next;
	temp->next ->prev = *tail2;
	temp -> next = *head2;
	(*head2) -> prev = temp;
	*head2 = *tail2 = NULL;

}
void PhysicalReverse(struct node **head,struct node **tail)
{
	struct node *current = *head;
	struct node *NEXT = NULL;
	struct node *PREV = *tail;

	if(*head == NULL)
		return ;

	do
	{
		NEXT = current -> next;
		current -> next = PREV;
		current -> prev = NEXT;
		PREV = current;
		current = NEXT;
	}while(current != *head);
	*tail = *head;
	*head = PREV;
}
void ReverseDisplay(struct node *head,struct node *tail)
{
	if(head == NULL)
	{
		printf("List is empty\n");
		return;
	}
	do
	{
			printf("<-|%d|->",(tail)-> data);
			tail = (tail) -> prev;
	}while(head != tail->next);
	printf("\n");

}

int CountNode(struct node *head,struct node *tail)
{
	int count = 0;
	if(head == NULL)
		return count;
	do
	{
		count++;
		head = head -> next;
	}while(head != tail->next);
	return count;
}

void display(struct node *head,struct node *tail)
{
	if(head == NULL)
	{
		printf("\nList is empty\n");
		return ;
	}
	do
	{
		printf("<-|%d|->",head -> data);
		head = head -> next;
	}while(head != tail -> next);
	printf("\n");
}
void DeleteAllNode(struct node **head,struct node **tail)
{
	struct node *temp = NULL;
	
	if(*head == NULL)
	{
		printf("List is Empty");
		return ;
	} 
	do
	{
		temp = *head;
		*head = temp -> next;
		temp -> next = NULL;
		temp -> prev = NULL;
		free(temp);
		if(*head == *tail)  // only one node is present
		{
			*head = *tail = NULL;
			break;
		}
		(*tail) ->next = *head;
		(*head) -> prev = *tail;
		temp = NULL;
	}while(*head != *tail);  // more than one node 
	printf("Deleted all nodes successfully\n");
}

