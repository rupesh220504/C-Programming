#include<stdio.h>
int main()
{
	int num,rem,s=9;
	printf("Enter any number \n");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		if(rem<s)
		{
			s=rem;
		}
		
		num=num/10;

	}
	
	   printf("Smalest digit is %d",s);

}
