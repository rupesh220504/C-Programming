#include<stdio.h>
int main ()
{
	int i,size,num,count=0;
	printf("How Many  Elements\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter Array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter any num to search\n");
	scanf("%d",&num);
	
	for(i=0;i<size;i++)
	{
		if(num==a[i])
	    {
			count++;
		}
			
	}
	printf("%d occurence %d times",num,count);
}
