#include<stdio.h>
#include<conio.h>
int Fact(int n);
int main()
{
	int num,val,a;
	printf("\n Enter the number: ");
	scanf("%d", &num);
	val = Fact(num);
	printf("\n Factorial of %d = %d", num, val);
	
	
	return 0;
	getch();
	
}
int Fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return (n * Fact(n-1));
	}
}
