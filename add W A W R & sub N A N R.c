#include<stdio.h>
int add()
{
	int n1,n2,n3;
	printf("Enter two numbers \n");
	scanf("%d%d",&n1,&n2);
	n3=n1+n2;
}
void sub()
{
	int n1,n2,n3;
	printf("Enter two numbers \n");
	scanf("%d%d",&n1,&n2);
	n3=n1-n2;
	printf("Subtraction is %d",n3);	
}
int main()
{
	int choice,n3;
	
	printf("1.Add \n2.Sub \nEnter choice \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			n3=add();
			printf("Add is %d",n3);
			break;
			
		case 2:
			sub();
			break;
		
		default:
			printf("Invalid Input");
			break;
	}
}
