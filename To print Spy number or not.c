#include<stdio.h>
int main()
{
	int num,rem,sum=0,prod=1;
	printf("Enter any number \n");
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
	   printf("It is Spy Number");
    }
    else
    {
    	printf("It is not spy Number");
    	
	}
}
