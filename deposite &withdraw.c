#include<stdio.h>
int balance=0;

void readbalance()
{
	printf("Enter Balance\n");
	scanf("%d",&balance);
}
void withdraw()
{
	int amount,withdraw1,current;
	
	printf("-----Withdraw-----\n");
	printf("Enter amount\n");
	scanf("%d",&amount);
	current=amount + withdraw1;
}
void deposite()
{
	int amount,deposite1,current;
	
	printf("-----Deposite-----\n");
	printf("Enter amount\n");
	scanf("%d",&amount);
	current=amount + deposite1; 
}
void showbalance()
{
	int current;
		printf("Current Balance is %d",current);
		
}
int main()
{
	int choice;
	readbalance();
	
	printf("1.Withdraw \n2.Deposite \nEnter Choice\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		withdraw();
	}
	else if(choice==2)
	{
		deposite();
	}
	else
	{
		printf("Invalid Choice");
	}
	
	showbalance();
}
