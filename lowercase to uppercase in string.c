#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter name \n");
	scanf("%s",&name);
	
	strlwr(name);  
	
	printf("name is %s",name);	
}

