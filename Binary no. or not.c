#include<stdio.h>
   int main()
{
	int num,rem;
	
	printf("Enter any number \n");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		
	if(rem!=0 && rem!=1)
	{
	   printf("It is not Binary Number");
	   break;
    }
    num=num/10;
    if(num==0)
    {
       printf("It is  Binary Number");	
	}
    }
}
