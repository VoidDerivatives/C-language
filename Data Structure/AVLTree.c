#include<stdio.h>
#include<malloc.h>

struct tree *create(struct tree *,int);
void Display(struct tree *root);
int balanceFactor(struct tree *);
struct tree *Rotation(struct tree *);

struct tree
{
	struct tree *lchild;
	int data;
	struct tree *rchild;
};

int main(void)
{
	struct tree *root = NULL;
	int no; 
	int choice;

	do
	{
		printf("\n1] create \n2] Exit\n\n");
		printf("Enter the chioce:\t\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:	printf("Enter the data :");
				scanf("%d",&no);
				root = create(root,no);
				Display(root);
				balanceFactor(root);
				
				break;

			case 2:break;

			default:printf("chioce is wrong");
				break;
	}

	}while(choice != 2);

	printf("root -> data: %d \n",root -> data);
	Display(root);
	
	return 0;
}
struct tree *create(struct tree *root,int no)
{
	struct tree *newnode = NULL;
	struct tree *ptr = NULL;
	struct tree *parent = NULL;

	ptr = root;

	while(ptr != NULL)
	{
		parent = ptr;

		if(no < ptr -> data)
			ptr = ptr ->lchild;
		else if(no > ptr ->data)
			ptr = ptr ->rchild;
		else
		{
			printf("Duplicate Node");
			return root;
		}
	}

	newnode = (struct tree *)malloc(sizeof(struct tree));

	if(newnode == NULL)
	{
		printf("Memory allocation failed");
		return ;
	}

	newnode-> data= no;
	newnode -> lchild = NULL;
	newnode -> rchild = NULL;

	if(root == NULL)
		root = newnode;
	else if(no < parent->data)
		parent ->lchild = newnode;
	else
		parent ->rchild = newnode;

	return root;
}
int balanceFactor(struct tree *root)
{
	int i;
	int j;
	int sub; 

	if(root == NULL)
	{
		return 0;
	}
	else
	{
		// height of left subtree
		i = balanceFactor(root -> lchild);
		// height of right subtree
		j = balanceFactor(root -> rchild);

		sub = i - j;
	
		if( 1 < sub && -1 < sub )
		{
			if(sub > 0)  // left heavy +ve
			{
				printf("data:\t%d\n",root -> data);
				root = Rotation(root);	
			}
			else         // right heavy  -ve
  			{
				printf("else");
			}
		}

		if(i > j)
			return i+1;
		else 
			return j+1;

	}

}
struct tree *Rotation(struct tree *root)
{
	struct tree *temp = NULL;
	if(root -> lchild -> rchild == NULL)	
	{
			temp = root;
			root = root -> lchild;
			root -> rchild = temp;
			temp -> lchild = NULL;
			temp -> rchild = NULL;
	}
	printf("root -> data in Rotation : %d",root -> data);
		
	return root;
}

void Display(struct tree *root)
{
	if(root == NULL)
	{
		return ;
	}

	printf("|%d|",root -> data);
	Display(root -> lchild);
	Display(root -> rchild);

}
