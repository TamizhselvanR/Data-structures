#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[10];
	int count=1;
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		while(a[i]==a[i+1])
		{
			count++;
			i++;
		}
		printf("%c %d ",a[i],count);
		count=1;
	}
 return 0;
}
