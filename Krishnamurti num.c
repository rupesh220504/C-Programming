#include<stdio.h>
   int main()
{
	int num,num1,rem,i,sum=0,fact;
	
	printf("Enter any number \n");
	scanf("%d",&num);
	
	num1=num;
	
	while(num>0)                 //145
	{
		rem=num%10;
		
		fact=1;
		
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==num1)
	{
	   printf("It is krishnamurty Number");
    }
    else
    {
       printf("It is not Krishnamurty Number");	
	}
}
