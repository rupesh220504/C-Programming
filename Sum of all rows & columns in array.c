#include<stdio.h>
main()
{
	int r,c;
	
	printf("Enter No.of Rows\n");
	scanf("%d",&r);
	
	printf("Enter No.of Columns\n");
	scanf("%d",&c);
	
	int a[r][c];
	
	int i,j,sum=0;
	printf("Enter Array\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    scanf("%d",&a[i][j]);	
		}	
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d | ",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("Sum is %d",sum);
}
