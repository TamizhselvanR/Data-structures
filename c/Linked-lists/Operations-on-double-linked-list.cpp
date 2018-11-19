#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *start = NULL; 
struct node *create(struct node *); 
struct node *display(struct node *); 
struct node *insert_beg(struct node *); 
struct node *insert_end(struct node *); 
struct node *insert_before(struct node *); 
struct node *insert_after(struct node *); 
struct node *delete_beg(struct node *); 
struct node *delete_end(struct node *); 
struct node *delete_node(struct node *); 
struct node *delete_list(struct node *); 
struct node *sort_list(struct node *);
int main()
{
	int option;
	do
	{
	
		printf("\n *****MAIN MENU *****");  
		printf("\n 1:  Create a list");  
		printf("\n 2:  Display the list");  
		printf("\n 3:  Add a node at the beginning");  
		printf("\n 4:  Add a node at the end");  
		printf("\n 5:  Add a node before a given node");  
		printf("\n 6:  Add a node after a given node");  
		printf("\n 7:  Delete a node from the beginning");
		printf("\n 8:  Delete a node from the end");  
		printf("\n 9:  Delete a given node");    
		printf("\n 10: Delete the entire list");  
		printf("\n 11: Sort the list");  
		printf("\n 12: EXIT");  
		printf("\n\n Enter your option : ");  
		scanf("%d", &option);  
		switch(option)  
		{  
			case 1: 
				start = create(start);   
				printf("\n LINKED LIST CREATED");   
				break;  
			case 2: 
				start = display(start);   
				break;  
			case 3: 
				start = insert_beg(start);  
				break;  
			case 4: 
				start = insert_end(start);   
				break;  
			case 5: 
				start = insert_before(start);   
				break;  
			case 6: 
				start = insert_after(start);   
				break;  
			case 7: 
				start = delete_beg(start);   
				break;  
			case 8: 
				start = delete_end(start);   
				break;  
			case 9: 
				start = delete_node(start);   
				break;  
			case 10: 
				start = delete_list(start);   
				printf("\n LINKED LIST DELETED");   
				break;  
			case 11: 
				start = sort_list(start);   
				break;
		}
	}while(option != 12);
	getch();
}
struct node *create(struct node *start)
{
	int num;
	struct node *newnode,*ptr;
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
			newnode -> prev = NULL;
			start = newnode;
			ptr = newnode;
		}
		else
		{
				
			ptr -> next  = newnode;
			newnode -> prev = ptr ;
			newnode -> next = NULL;
			ptr = newnode;
		}
		printf("enter the no");
		scanf("%d",&num);
	}
	return start;
}		
struct node *display(struct node *start)
{
	struct node *ptr;
	ptr = start;
	printf("the numbers are\n");
	while(ptr != NULL)
	{
		printf("%d\n",ptr -> data);
		ptr = ptr -> next;	
	}
	return start;
}	
struct node *insert_beg(struct node *start)
{
 	int num;
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the no to be inserted at beginning\n");
	scanf("%d",&num);
	newnode -> data = num;
	newnode -> next = start;
	newnode -> prev = NULL;
	start = newnode;
	return start;
}
struct node *insert_end(struct node *start)
{
	int num;
	struct node *newnode,*ptr;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the no to be inserted at end");
	scanf("%d",&num);
	while(ptr -> next != NULL)
	{
		
		ptr = ptr -> next;
	}
	ptr -> next = newnode;
	newnode -> prev = ptr;
	newnode -> next = NULL;
	return start;
}
struct node *insert_before(struct node *start)
{
	int num,val;
	struct node *newnode,*ptr,*preptr;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the no to be inserted and the value before which it has to be inserted");
	scanf("%d",&num);
	scanf("%d",&val);
	ptr = start;
	while(ptr -> data != val)
	{
		preptr = ptr;  
		ptr = ptr -> next;
	}
	preptr -> next = newnode;
	newnode -> next = ptr;
	newnode -> data = num;
	return start;
}
struct node *insert_after(struct node *start)
{
	int num,val;
	struct node *newnode,*afterptr,*ptr;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the no to be inserted and the value after which it has to be inserted");
	scanf("%d",&num);
	scanf("%d",&val);
	ptr = start;
	while(ptr -> data != val)
	{  
		ptr = ptr -> next;
		afterptr = ptr -> next;
	}
	ptr -> next = newnode;
	newnode -> next = afterptr;
	newnode -> data = num;
	return start;
}
struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr = start;
	start = ptr -> next;
	start -> prev = NULL;
	return start;
}
struct node *delete_end(struct node *start)
{
	struct node *ptr,*preptr;
	ptr = start;
	while(ptr -> next != NULL)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	preptr -> next = NULL;
	return start;
}
struct node *delete_node(struct node *start)
{
	int num;
	struct node *preptr,*ptr;
	printf("Enter the no to be deleted");
	scanf("%d",&num);
	ptr = start; 
	if(ptr -> data == num) 
	{  
		start = delete_beg(start);   
	} 
	else
	{
		while(ptr -> data != num)
		{
			preptr = ptr;  
			ptr = ptr -> next;
		}
		preptr -> next = ptr -> next;
	}
	return start;
}
struct node *delete_list(struct node *start)
{
	while(start != NULL)  
	{   
		 printf("\n %d is to be deleted next", start -> data);   
		 start = delete_beg(start);   
	} 
	return start;
}
struct node *sort_list(struct node *start) 
{ 
	struct node *ptr1, *ptr2; 
	int temp; 
	ptr1 = start; 
	while(ptr1 -> next != NULL) 
	{  
		ptr2 = ptr1 -> next;  
		while(ptr2 != NULL)  
		{   
			if(ptr1 -> data > ptr2 -> data)   
			{    
				temp = ptr1 -> data;    
				ptr1 -> data = ptr2 -> data;    
				ptr2 -> data = temp;   
			}   
			ptr2 = ptr2 -> next;  
		}  
		ptr1 = ptr1 -> next;
	}
	return start;
}	
	
