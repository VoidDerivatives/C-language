//date :19 sept 2020  - 30 sept 2020
//
// Headers 
//
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
//
// structure declration 
//
struct node
{
	int data;
	struct node *next;
};
//
// Function declarations
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
void ReverseDisplay(struct node **);
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
	int data;
	int count;
	int choice;
	int choice1;
	int choice2;

	BACK:do
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
		scanf_s("%d",&choice);

		if(choice == 2 || choice == 3 || choice == 4 || choice == 7)
	//	if(2<=choice || choice <=4 || choice == 7)
			if(first == NULL)
			{
					printf("\nList is Empty\n");
					continue;
			}
		switch(choice)
		{
			case 1:	printf("_____________________________________\n");
					do
					{
						printf("1] Insert first \n2] Insert Last\n3] Insert At Position\n");
						printf("4] Back\n");
						printf("Enter the choice:\t");
						scanf_s("%d",&choice1);

						switch(choice1)
						{

						case 1: printf("_____________________________________\n");
							    printf("Enter the data:\t");
								scanf_s("%d",&data);
								InsertFirst(&first,data);
				
								break;

						case 2: printf("_____________________________________\n");
					
								printf("Enter the data:\t");
								scanf_s("%d",&data);
								InsertLast(&first,data);
						
								break;

						case 3: printf("_____________________________________\n");
		
								printf("Enter the position:\t");
								scanf_s("%d",&pos);
					
								count=CountNode(first);
								if(pos<=0  || count+1<pos)
								{
									printf("Position is Invaild\n\n");
									break;
								}
								printf("Enter the data:\t");
								scanf_s("%d",&data);
					
								InsertAtPosition(&first,data,pos);
			
								break;
						case 4: break;
						default :printf("choice is Invaild\n");
								break;
						}
					
								display(first);
								printf("_____________________________________\n");
					}while(choice1 != 4);
					break;

			case 2:	printf("_____________________________________\n");	
					do
					{
						printf("1] Delete First\n2] Delete Last\n3] Delete At Position\n");
						printf("4] Back\n");
						printf("Enter the choice:\t");
						scanf_s("%d",&choice1);

						
						if(first == NULL)
						{
							printf("\nList is Empty\n");
							printf("_____________________________________\n");
							continue;
						}

						switch(choice1)
						{

							case 1:printf("_____________________________________\n");
					
									data = DeleteFirstNode(&first);
					
									printf("Your deleted Data is:\t%d\n",data);
					
									break;

							case 2: printf("_____________________________________\n");
									
									 data = DeleteLastNode(&first);
				
									printf("Your deleted Data is:\t%d\n",data);
					
									break;

							case 3: printf("_____________________________________\n");
									
									printf("Enter the position which to be deleted:\t");
									scanf_s("%d",&pos);
				
									count=CountNode(first);
									if(pos<=0  || count<pos)
									{
										printf("Position is Invaild\n\n");
										break;
									}
									data = DeleteAtPosition(&first,pos);
					
									printf("Your deleted Data is:\t%d\n",data);
					
									break;
							case 4:break;
							default:printf("choice is Invaild");
									break;
							}
						
								display(first);
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
						
						printf("Enter the choice:\t");
						scanf_s("%d",&choice1);

						switch(choice1)
						{
						case 1:	printf("_____________________________________\n");
								
								printf("Enter the data which to be search At first Occurance:\t");
								scanf_s("%d",&data);
					
								pos = SearchFirstOccurance(first,data);
		
								if(pos == 0)
									printf("Data not found\n");
								else
									printf("Data is found at \"%d\" position.\n",pos);
				
								break;
	
						case 2:	printf("_____________________________________\n");
							
							printf("Enter the data which to be search At Last Occurance:\t");
							scanf_s("%d",&data);
					
							pos = SearchLastOccurance(first,data);
					
							if(pos == 0)
								printf("Data not found\n");
							else 
							  printf("Data is found at \"%d\" position.\n",pos);
				
							break;

						case 3:printf("_____________________________________\n");
							
							printf("Enter the data which to be search All (count)Occurance:\t");
							scanf_s("%d",&data);
					
							pos = SearchAllOccurance(first,data);
						
							if(pos == 0)
								printf("Data not found\n");
							else
								printf("Total count Is:\t%d\n",pos);
					 
							printf("_____________________________________\n");
							break;
					case 4:break;
					default:printf("choice is Invaild");
						break;
						}
						
								display(first);
								printf("_____________________________________\n");
					}while(choice1 != 4);
						break;

			case 4:	printf("_____________________________________\n");
				do
				   {
					   printf("1] Physical Reverse\n");
					   printf("2] Reverse Display\n");
					   printf("3] Back\n");
					   
					   printf("Enetr the choice:\t");
					   scanf_s("%d",&choice1);

					   switch(choice1)
					   {
					   case 1:printf("_____________________________________\n");
							
							PhysicalReverse(&first);
					
							break;

					   case 2:printf("_____________________________________\n");
							
							ReverseDisplay(&first);

							break;
					   case 3:break;
					   default:("choice is Invaild");
							   break;
					   }
					   
								display(first);
								printf("_____________________________________\n");
				   }while(choice1 != 3);
					   break;

			case 5:	printf("_____________________________________\n");
					do
					{
						printf("1] concat List\n");
						printf("2] concat At position\n");
						printf("3] Back\n");
						
						printf("Enter the choice:\t");
						scanf_s("%d",&choice2);
				
						switch(choice2)
						{
						case 2: printf("_____________________________________\n");
								printf("Enter the position:\t");
								scanf_s("%d",&pos);
					
								count=CountNode(first);
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
									printf("Your second list sre empty\n");
									printf("Enter the second list:\n");
								do
								{
									printf("1]Insert First \n2]Insert Last \n3]Insert At Position \n");
									printf("4]go Back to main menu \n");
									printf("5]select these option for result\n");
						
									printf("\nEnter your choice:\t");
									scanf_s("%d",&choice1);
						
									switch(choice1)
									{
		
										case 1: printf("_____________________________________\n");
						
											printf("Enter the data:\t");
											scanf_s("%d",&data);
											InsertFirst(&second,data);
							
											break;
										case 2: printf("_____________________________________\n");
							
												printf("Enter the data:\t");
												scanf_s("%d",&data);
												InsertLast(&second,data);
								
												break;
										case 3: printf("_____________________________________\n");
									
												printf("Enter the position:\t");
												scanf_s("%d",&pos1);
												count=CountNode(second);
												if(pos1<=0  || count+1<pos1)
												{
													printf("Position is Invaild\n\n");
													break;
												}
										
												printf("Enter the data:\t");
												scanf_s("%d",&data);
												InsertAtPosition(&second,data,pos1);
									
												break;
										case 4:	goto BACK;
								
										case 5: break;  //directly break for concate list
										default:printf("Your choice is Invalid please select correct one\n");

										}
									
											display(second);
											printf("_____________________________________\n");
								}while(choice1!=5);
							}
						// if user wants to do concatAtPostion() then 'if' will excute otherwise else
								if(choice2 == 2)
								{
									ConcatAtPosition(&first,&second,pos);
									printf("***Concate At position***\n");
								}
								else
								{
							//list will concate here
									printf("***Your concat list are***\n");
									ConcatList(&first,&second);
				 				}
								display(first);
								printf("_____________________________________\n");
								break;
						case 3:break;
						default:printf("choice is Invalid");
							break;
					}
					}while(choice2 != 3);
					break;

			case 6:printf("_____________________________________\n");
					display(first);
					data=CountNode(first);
					printf("Total count is:\t%d\n",data);
					
					break;

			case 7: printf("_____________________________________\n");
					
					 DeleteAllNode(&first);

					 printf("_____________________________________\n");
					 break;

			default: printf("_____________________________________\n\n"); 
					 printf("choice is Invalid\n");
					 break;
		}
	}while(choice != 7);

	_getch();
	return 0;
}
void InsertFirst(struct node **head,int no)
{
	struct node *newnode = NULL;
	
	newnode = (struct node*)malloc(sizeof(struct node));

	if(newnode == NULL)
	{
		printf("Memory allocation failed");
		return ;
	}
	newnode->data = no;
	/*if(*head==NULL)
	{
		newnode->next=NULL;
		*head=newnode;
		return ;
	}*/
	newnode->next = *head;
	*head = newnode;
	newnode = NULL;    // sanskar

}
void InsertLast(struct node **head,int no)
{
	struct node *newnode=NULL;
	struct node *temp=NULL;

	newnode = (struct node*)malloc(sizeof(struct node));

	if(newnode == NULL)
	{
		printf("Memory allocation failed");
		return ;
	}
	newnode->data = no;
	newnode->next = NULL;      // as a last node

	if(*head == NULL)   //if list is empty
	{
		*head = newnode;  //first as well as last node
		return ;
	}
	temp = *head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;

	// sanskar
	temp = NULL;   
	newnode = NULL;
}
void display(struct node *head)
{
	printf("\n\n****Singly Linked List ****\n\n");
	
	if(head == NULL)
	{
		printf("List is Empty\n");
		return ;
	}
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;
	}
	printf("\n");
}
void InsertAtPosition(struct node **head,int no,int pos)
{
	struct node *newnode = NULL;
	struct node *temp = NULL;
	int count;
	
	if(pos == 1)
	{
		InsertFirst(head,no);
		return;
	}
	newnode = (struct node*)malloc(sizeof(struct node));
	
	if(newnode == NULL)
	{
		printf("memory allocation failed");
		return;
	}

	newnode->data = no;
	temp = *head;
	count = 1;
	while(count < pos-1)
	{
		count++;
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	//sanskar
	temp=NULL;
	newnode = NULL;
}
int DeleteFirstNode(struct node **head)
{
	int data;
	struct node *temp = NULL;
	
	if(*head == NULL)
	{
		printf("List is Empty");
		return -1;
	}
	temp = *head;
	data = temp->data;
	*head = temp->next;
	temp->next = NULL;
	free(temp);
	temp = NULL;
	
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
	if(temp->next == NULL)
	{   //only one node
		data=temp->data;
		free(temp);            //first as well as last node
		*head = NULL;       //here list becomes empty
		return data;
	}

	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}

	data = temp->next->data;
	free(temp->next);      //last node deleted
	temp->next = NULL;    //second last becomde last
	temp = NULL;  //sanskar
	return data;
}
int DeleteAtPosition(struct node **head,int pos)
{
	struct node *temp = NULL;
	struct node *temp1 = NULL;
 	int count;
	int data;

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
	count = 1;
	while(count<pos-1)
	{
		count++;
		temp = temp->next;
	}
	temp1 = temp->next;
	data = temp1->data;
	temp->next = temp1->next;
	temp1->next = NULL;
	free(temp1);
	temp1 = NULL;  //sanskar
	return data;
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
		pos = 0;    //data not fond
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
	int count=0;
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
	struct node *current = *head;
	struct node *prev = NULL;
	struct node *Next = NULL;
	
	if(*head == NULL)
	{
		printf("List is Empty");
		return ;
	}
	while(current != NULL)
	{
		Next = current->next;
		current->next = prev;
		prev = current;
		current = Next;
	}
	*head=prev;
}
void ReverseDisplay(struct node **head)
{		
	if(*head == NULL)
	{
		printf("List is Empty");
		return ;
	}
	PhysicalReverse(head);

	display(*head);

	PhysicalReverse(head);

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
	while(temp2->next != NULL)
		temp2 = temp2->next;
	count = 1;
	while(count<pos-1)
	{
		count++;
		temp1 = temp1->next;
	}
	temp2->next = temp1->next;
	temp1->next = *head2;
	*head2 = NULL;
	//sanskar
	temp1 = NULL;
	temp2 = NULL;
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
		free(temp);
	}
	printf("Deleted all nodes successfully\n");
}