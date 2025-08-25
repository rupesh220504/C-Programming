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
	
	strcat(name,name1);
	
	printf("name is %s\n",name);
	printf("name1 is %s\n",name1);	      //joint the two strings
}
