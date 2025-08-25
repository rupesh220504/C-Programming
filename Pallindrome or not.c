#include<stdio.h>
int main()
{
	int num,rem,rev=0,num1;
	printf("Enter any number \n");
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
