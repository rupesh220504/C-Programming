#include<stdio.h>
void fact();
void reverse();

main()
{
	int n;
	printf("1.Factorial \n2.Reverse \nEnter Choice \n");
	scanf("%d",&n);
	if(n==1)
	{
		fact();
	}
	else if(n==2)
	{
		reverse();
	}
	else
	{
		printf("Invalid Input");
	}
}
void fact()
{
	int i,num,fact=1;
	printf("Enter Any Number \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
    }
	printf("Factorial is %d \n",fact);
}
void reverse()
{
	int num,rem,rev=0;
	printf("Enter Any Number \n");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("Reverse is %d \n",rev);
}

