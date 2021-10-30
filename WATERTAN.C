#include<stdio.h>
int a,b,i;
void main()
{
	clrscr();

	printf("Enter the level of water : ");
	scanf("%d",&a);
	printf("Enter the max level : ");
	scanf("%d",&b);

	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			printf("\nThe level of water : %d",i);
			if(i==b)
			printf("\nThe water tank is full : Max level reached(%d)",i);
		}
	}
	else if(a>=b)
	printf("The water tank is already full");
	getch();
}
