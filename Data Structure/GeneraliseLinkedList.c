#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct StructNode
{
	union UnionNode
	{
		int idata;
		char cdata;
		float fdata;
		double ddata;	
		union UnionNode *ptr1;						
	}iobj;
	int flag;
	struct StructNode *next;
};

void Insert(struct StructNode **,int, void *);
void Display(struct StructNode *);

int main(void)
{
	struct StructNode *firstNode = NULL;
	int idata;
	char cdata,temp;
	float fdata;
	double ddata;

	int choice;	

	printf("Enter the data :\n");
	printf("For Interger Data Select 1 \n");
	printf("For Char Data Select 2 \n");
	printf("For Float Data Select 3 \n");	
	printf("For Double Data Select 4 \n");
	scanf("%d",&choice);	

	switch(choice)
	{
		case 1:
			printf("Enter Interger Data :\t");
			scanf("%d",&idata);
			Insert(&firstNode,choice,&idata);	
			break;		
		case 2:
			printf("Enter Character Data :\t");
			scanf("%c%c",&temp,&cdata);
			Insert(&firstNode,choice,&cdata);	
			break;
		case 3:
			printf("Enter Float Data :\t");
			scanf("%f",&fdata);
			Insert(&firstNode,choice,&fdata);	
			break;		
		case 4:
			printf("Enter Double Data :\t");
			scanf("%lf",&ddata);
			Insert(&firstNode,choice,&ddata);	
			break;		
				
		default:
			printf("Choice is Invalid");
			break;
	}
	
	Display(firstNode);	
	return 0;
}

void Insert(struct StructNode **head,int flag,void *pno)
{
	struct StructNode *newnode;
	
	newnode = (struct StructNode *)malloc(sizeof(struct StructNode));
	

	if(newnode == NULL)
	{	
		printf("Memory Allocation failed ");
		return ;
	}

	if(*head == NULL)
	{	
		newnode -> flag = flag;
		if(flag == 1)
		{	
			(newnode -> iobj).idata = *(int*)pno;
		}		
		else if(flag == 2)
		{	
			(newnode -> iobj).cdata = *(char *)pno;
		}
		else if(flag == 3)
		{
			(newnode -> iobj).fdata = *(float *)pno;
		}
		else 
		{
			(newnode -> iobj).ddata = *(double *)pno;
		}			
		newnode -> next = NULL;
		*head = newnode;

		return ;
	}		
}
void Display(struct StructNode *head)
{
	struct StructNode *temp = NULL;	
	
	if(head != NULL)
	{
		if(head->flag == 1)
			printf("|%d|",head ->iobj.idata);
		else if(head->flag == 2)
		{

			printf("|%c|",head ->iobj.cdata);
			
		}		
		else if(head->flag == 3)
			printf("|%f|",head ->iobj.fdata);
		else
			printf("|%lf|",head ->iobj.ddata);
	head = head -> next;
	}
}
