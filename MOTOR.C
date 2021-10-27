#include<stdio.h>
void main()
{
int a;
clrscr();
printf("Enter the volume of the water in the tank : ");
scanf("%d",&a);
if(a>=0 && a<=10)
printf("Motor is ON");
else if(a>=90 && a<=100)
printf("Motor is OFF");
else if(a>10 && a<90)
printf("Motor is Running");
else
printf("Invalid data for the operation of the motor");
getch();
}


