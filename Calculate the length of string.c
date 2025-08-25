#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	int n;
	
	printf("Enter name \n");
	scanf("%s",&name);
	
	n = strlen(name);
	printf("length is %d\n",n);
	
	printf("name is %s\n",name);
	
}
