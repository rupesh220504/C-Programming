#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter any number \n");
	scanf("%d",&num);
	
	while(num>0)
	{
		num=num/10;
		count++;
	}++
	printf("It is %d Digit number",count);
}
