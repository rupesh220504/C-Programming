#include<stdio.h>
main()
{
	int size,i,num,found=0;
	
	printf("How Many Elements\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter Array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",a[i]);
	}
	printf("Enter Any Num to Search\n");
	scanf("%d",&num);
	
	for(i=0;i<size;i++)
	{
		if(a[i]==num)
		{
			printf("Position at %d\n",i);
			found++;
		}
	}
	if(found==0)
	{
		printf("Position at -1");
	}
}

