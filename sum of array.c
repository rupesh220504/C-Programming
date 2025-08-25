#include<stdio.h>
int main ()
{
	int i,size,sum=0;
	printf("How Many  Elements\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter Array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array is\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	    sum=sum+a[i];
	}
	printf("Sum is %d",sum);
}
