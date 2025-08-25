#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("Enter Any Car No. \n");
	scanf("%d",&num);
	
	if(num>=0001 && num<=9999)
	{
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	if(sum%3==0 || sum%5==0 || sum%7==0)
	{
		printf("It is Lucky Car No.");
	}
	else
	{
		printf("It is Not lucky Car No.");
    }
    }
    else
    {
    	printf("Invalid Number");
	}
		
}
