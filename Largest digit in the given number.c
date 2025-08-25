#include<stdio.h>
int main()
{
	int num,rem,l=0;
	printf("Enter any number \n");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		if(rem>l)
		{
			l=rem;
		}
		
		num=num/10;

	}
	{
	   printf("Greatest digit is %d",l);
    }

}
