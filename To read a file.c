#include<stdio.h>
main()
{
	FILE*fp=NULL;
	char name[20];
	fp =fopen("Sampletext,txt 123","r");
	
	if(fp==NULL)
	{
		printf("File Not found");
		exit(1);
	}
	while(!feof(fp))
	{
		fgets(name,10,fp);
		printf("%s",name);
    }
	fclose(fp);
}
