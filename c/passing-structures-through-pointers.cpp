#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct details
{
	int roll;
};
struct details *ptr[60];
int main()
{	
	for(int i=0;i<4;i++)
	{
		ptr[i] = (struct details *)malloc(sizeof(struct details));
		printf("enter the %d th no\n",i);
		scanf("%d",&ptr[i]->roll);
	}
	for(int i=0;i<4;i++)
	{
		printf("the no is %d\n",ptr[i]->roll);
	}	
}
