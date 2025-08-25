#include<stdio.h>
int largestDigit(int num)
{
	int large=0,rem;
    while(num>0)
	{
		rem=num%10;
		if(rem>large)
		{
			large=rem;
		}
		num=num/10;
	}
	return large;
}
void smallestDigit(int num)
{
	int small=9,rem;
	
	while(num>0)
	{
		rem=num%10;
		if(rem<small)
		{
			small=rem;
		}
		num=num/10;
	}
	printf("Smallest digit is %d",small);	
}
int main()
{
	int choice,num,large;
	
	printf("1.Largest Digit \n2.Smallest Digit \nEnter choice \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		    
			printf("Enter Any Number \n");
			scanf("%d",&num);
			
			large = largestDigit(num);
			
			printf("Largest digit is %d",large);
			break;
			
		case 2:
		
	        printf("Enter Any number \n");
	        scanf("%d",&num);
	        smallestDigit(num);
			break;
		
		default:
			printf("Invalid Input");
			break;
	}
}
