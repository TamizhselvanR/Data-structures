#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int num;
	struct node *newnode,*ptr;
	struct node *start = NULL;
	printf("Enter -1 if the creation is over\n");
	printf("enter the no\n");
	scanf("%d",&num);
	while(num != -1)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode -> data = num;
		if(start == NULL)
		{
			newnode -> next = NULL;
			start = newnode;
			ptr = newnode;
		}
		else
		{
			ptr -> next  = newnode;
			newnode -> next = NULL;
			ptr = newnode;
		}
		printf("enter the no");
		scanf("%d",&num);
	}		
	ptr = start;
	while(ptr != NULL)
	{
		printf("the output is %d\n",ptr -> data);
		ptr = ptr -> next; 
	}
	getch();
}


