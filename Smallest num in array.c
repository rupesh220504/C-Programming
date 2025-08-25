#include<stdio.h>
int main ()
{
	int i,size,small;
	printf("How Many  Elements\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter Array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	small=a[0];
	
	for(i=0;i<size;i++)
	{
		if(a[i]<small)
	    {
			small=a[i];
		}
			
	}
	printf("Smallest Num is %d",small);
}
