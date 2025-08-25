#include<stdio.h>
main()
{
	FILE*fp=NULL;
	
	fp =fopen("Sampletext,txt","w");
	
	char name[20];
	
	printf("Enter any name\n");
	gets(name);
	
	fputs(name,fp);
	
	fclose(fp);
	
}
