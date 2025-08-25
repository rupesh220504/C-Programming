#include<stdio.h>
main()
{
	int size,i,j,temp,num;
	
	printf("How Many Elements\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter Array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}

