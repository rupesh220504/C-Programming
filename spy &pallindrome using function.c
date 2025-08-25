#include<stdio.h>
void spy();
void pallindrome();

main()
{
	int n;
	printf("1.Spy Number \n2.Pallindrome Number \nEnter Choice \n");
	scanf("%d",&n);
	if(n==1)
	{
		spy();
	}
	else if(n==2)
	{
		pallindrome();
	}
	else
	{
		printf("Invalid Input");
	}
}
void spy()
{
	int num,rem,sum=0,prod=1;
	printf("Enter Any Number \n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		prod=prod*rem;
		num=num/10;
	}
	if(sum==prod)
	{
	printf("It is a SPY Number");
    }
    else
    {
    printf("It is Not a SPY Number");
	}  
}
void pallindrome()
{
	int num,num1,rem,rev=0;
	printf("Enter Any Number \n");
	scanf("%d",&num);
	
	num1=num;
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==num1)
	{
		printf("It is Pallindrome Number");
	}
	else
	{
		printf("It is not Pallindrome Number");
	}
}

