#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i==1 ||j==1 || i==3 || i==2&j==4 || i==4&j==2 || i==5&j==3 || i==6&j==4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
        printf("\n");
	}
	
	return 0;
}
