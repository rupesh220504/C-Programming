#include<stdio.h>
#include<string.h>
main()
{
	char name[20],name1[20];
	int n;
	
	printf("Enter name \n");
	scanf("%s",&name);
	
	strcpy(name1,name);
	
	printf("name is %s\n",name);
	printf("name1 is %s\n",name1);
	
}
