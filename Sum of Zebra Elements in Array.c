#include<stdio.h>
main()
{
	int a[5][5];
	
	int i,j,sum=0;
	printf("Enter Array\n");
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		    scanf("%d",&a[i][j]);	
		}	
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d | ",a[i][j]);
			if(i==0 || i==4 || i + j==4)
			{
				sum=sum+a[i][j];
			}
			
		}
		printf("\n");
	}
	printf("Sum is %d",sum);
}
