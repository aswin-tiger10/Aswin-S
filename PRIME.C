#include<stdio.h>
int a,i,count=0;
void main()
{
	clrscr();

	printf("Enter the number : ");
	scanf("%d",&a);

	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		count++;
	}

	if(count==2)
	printf("It is a prime number");

	else
	printf("It is not a prime number");

	getch();
}