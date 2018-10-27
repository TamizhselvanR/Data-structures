#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{

struct details
{
	int roll;
	
};
struct details *ptr[60];
for(int i=0;i<4;i++)
{
ptr[i] = (struct details *)malloc(sizeof(struct details));
printf("enter the %d",i);
scanf("%d\n",&ptr[i]->roll);
}
for(int i=0;i<4;i++)
	{
	printf("the no is %d\n",ptr[i]->roll);
	}	
}
