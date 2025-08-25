#include<stdio.h>
#include<string.h>
main()
{
	
	char name[20],name1[20];
	
	name1[20]=name[20];
	
	printf("Enter name \n");
	scanf("%s",&name);
	
	strcpy(name1,name);
	strrev(name);
	strcmp(name1,name);
	
	if(name1==name)
	{
		printf("It is Pallindrome Name");
	}
	else
	{
		printf("It is not Pallindrome Name");
	}	
	
	   
}
