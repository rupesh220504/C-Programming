#include<stdio.h>
int main()
{
	char name[20];

    printf("Enter Any Name\n");
    scanf("%s",&name);

    int i;
    
    i=0;
    
    while(name[i]!='\0')
    {
    	if(name[i]>=65 && name[i]<=90)
    	{
    		name[i] = name[i]+32;
		}
		if(name[i]>=97 && name[i]<=122)
    	{
    		name[i] = name[i]-32;
		}
		i++;
	}
	printf("Name is %s",name);
}
