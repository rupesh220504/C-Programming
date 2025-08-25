#include<stdio.h>
int main()
{
	char name[20];

    printf("Enter Any Name\n");
    scanf("%s",&name);

    int i,capital =0,small =0;
    
    i=0;
    
    while(name[i]!='\0')
    {
    	if(name[i]>=65 && name[i]<=90)
    	{
    		capital++;
		}
		if(name[i]>=97 && name[i]<=122)
    	{
    		small++;
		}
		i++;
	}
	printf("Capital = %d\n",capital);
	printf("Small = %d\n",small);
}
