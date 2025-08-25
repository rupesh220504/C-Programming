#include<stdio.h>
int main ()
{
	int i,size,large=0;
	printf("How Many  Elements\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter Array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(a[i]>large)
	    {
			large=a[i];
		}
			
	}
	printf("Largest Num is %d",large);
}
