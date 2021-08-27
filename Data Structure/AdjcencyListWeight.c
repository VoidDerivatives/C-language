#include<stdio.h>
#include<malloc.h>
struct vertex
{
	struct vertex *nextvertex;
	int data;
	struct edge *firstedge;
};
struct edge
{
	struct vertex *adjcentvertex;
	struct edge *nextedge;
	int weighted;	
};

void Insert(struct vertex **,int,int,int);
void display(struct vertex *);
void deleteAllNode(struct vertex **);

int main(void)
{
	int vertex = 0;
	int adjvertex = 0;
	int adjvertex1 = 0;	
	int counter1,counter2;
	int TotalNoOfVertices;
	int weight = 0;
	
	struct vertex *first = NULL;	

	printf("Enter the Total NO of vertices :\t");
	scanf("%d",&TotalNoOfVertices);

	printf("\n\n");

	printf("Enter the starting vertex:\t");
	scanf("%d",&vertex);

	Insert(&first,adjvertex,vertex,weight);		
	
	for(counter1 = vertex ; counter1 < TotalNoOfVertices ;counter1 ++)
	{
		printf("Enter the number of adjcent vertices of v%d  :" ,vertex);
		scanf("%d",&adjvertex);
	
		for(counter2 = 0; counter2 < adjvertex ; counter2++)
		{
			printf("Enter the %d adjcent vertex of v%d :",counter2 + 1,vertex);
			scanf("%d",&adjvertex1);
			printf("Enter the Weight of %d adjcent vertex of %d :",counter2 + 1,vertex);
			scanf("%d",&weight);
			Insert(&first,adjvertex1,vertex,weight);		
		}
		vertex++;

		printf("\n\n");
	}

	printf("-----------------------------------\n");
	printf("*** NOTE ***\n");
	printf("|| represents => vertex \n[] represent =>weight \n");	
	display(first);
	deleteAllNode(&first);
	return 0;
}
void Insert(struct vertex **head,int adjvertex,int vertex,int weight)
{
	struct vertex *temp1 = *head;
	struct vertex *temp2 = *head;
	struct edge *temp3 = NULL;
	struct edge *newnode = NULL; 
	struct vertex *newnode1 = NULL;

	if(*head == NULL)            // for staring vertex
	{
		newnode1 = (struct vertex *)malloc(sizeof(struct vertex));
	
		if(newnode1 == NULL)
		{
			printf("Memory allocation failed");
			return ;
		}

		newnode1 -> data = vertex;
		newnode1 -> firstedge = NULL;
		newnode1 -> nextvertex = NULL;
	
		*head = newnode1;
		return ;		

	}

	while(temp1 -> nextvertex != NULL && temp1 -> data != vertex)   // vertex
		temp1 = temp1 -> nextvertex;
	
	while(temp2 -> nextvertex != NULL && temp2 -> data != adjvertex) // adjvertex
		temp2 = temp2 -> nextvertex;

	if(temp2 -> data != adjvertex)
	{
		newnode1 = (struct vertex *)malloc(sizeof(struct vertex));

		if(newnode1 == NULL)
		{
			printf("Memory allocation failed");
			return ;
		}
	
		newnode1 -> data = adjvertex;
		newnode1 -> firstedge = NULL;
		newnode1 -> nextvertex = NULL;

		temp2 -> nextvertex = newnode1;
		temp2 = newnode1;
	}

	newnode = (struct edge *)malloc(sizeof(struct edge));
	if(newnode == NULL)
	{
		printf("Memory allocation failed");
		return ;
	}	 		

	newnode -> adjcentvertex = temp2;
	newnode -> weighted = weight;	
	newnode -> nextedge = NULL;
	if(temp1 -> firstedge == NULL)
	{
		temp1 -> firstedge = newnode;
	}
	else
	{
		temp3 = temp1 -> firstedge;
		while(temp3 -> nextedge != NULL)
			temp3 = temp3 -> nextedge;

		temp3 -> nextedge = newnode;
		
	}		
}
void display(struct vertex *head)
{	
	struct edge *temp = NULL;

	while(head != NULL)
	{
		temp = head -> firstedge;
		printf("|v%d| =\t",head -> data);
		while(temp != NULL)
		{
			printf("|v%d| -> ",(temp -> adjcentvertex) -> data);
			printf("[%d]\t",temp -> weighted);
			temp = temp -> nextedge;
		}
		head = head -> nextvertex;	
		printf("\n");
	}	
		
}
void deleteAllNode(struct vertex **head)
{
	struct edge *temp = NULL;
	struct edge *temp1 = NULL;
	struct vertex *head1 = *head;

	if(*head == NULL)
	{		
		printf("Your Adjcency List are Empty");
		return;
	}

	while(*head != NULL)
	{
		temp = (*head) -> firstedge;
		while(temp != NULL)
		{
			temp -> adjcentvertex = NULL;
			temp1 = temp;
			temp = temp -> nextedge;
			temp1 -> nextedge = NULL;
			free(temp1);
			temp1 = NULL;
		}		
		head1 = *head;
		(*head) = (*head) -> nextvertex;
		head1 -> firstedge = NULL;
		head1 -> nextvertex = NULL;
		free(head1);
		head1 = NULL;	
		
	}		
	temp = NULL;
	*head = NULL;

	printf("\nDeleted All Node Successfully");
}
