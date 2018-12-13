#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,val,i;
void push();
void pop();
void peek();
void display();
int main()
{
	top = -1;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");
	do
	{
		printf("\nEnter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				peek();
				break;
			}
			case 4:
			{
				display();
				break;
			}
			case 5:
			{
				printf("\n Exit");
				break;
			}
			
			default :
			{
				printf("\n Please enter a valid no in (1,2,3,4)");
			}
		}
	}while(choice != 5);
	getch();
}
void push()
{
	if(top >= n-1 )
	{
		printf("\nStack overflow");
	}
	else
	{
		printf("\nEnter the value to be pushed");
		scanf("%d",&val);
		top ++;
		stack[top] = val;
	}
}
void pop()
{
	if (top == -1)
	{
		printf("\nStack undeflow");
	}
	else
	{
		printf("\nthe popped element is %d",stack[top]);
		top --;
	}
}
void display()
{
	if(top >= 0)
	{
		printf("\nthe elements int stack are");
		for(i = top ;i >= 0 ;i --)
		{
			printf("\n%d",stack[i]);
		}
	}
}
void peek()
{
	printf("\nthe peek elements is %d",stack[top]);
}

