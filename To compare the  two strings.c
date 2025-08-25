#include<stdio.h>
#include<string.h>
main()
{
	char name[20],name1[20];
	int n;
	
	printf("Enter name \n");
	scanf("%s",&name); //steve
	
	printf("Enter name1 \n");
	scanf("%s",&name1); //jobs
	
	n = strcmp(name,name1);
	
	if(n == 0)
	{
		printf("Same string ");
	}
	else
	{
		printf("not same string ");
	}	
}

