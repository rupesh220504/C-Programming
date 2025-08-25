#include<stdio.h>
int main()
{
	char name[20];
	
	printf("Enter Any Name\n");
	scanf("%s",&name);
	
	int i,vowel=0;
	
	i=0;
	
	while(name[i]!='\0')
	{
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
		{
			vowel++;
		}
		else if(name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
		{
			vowel++;
		}
		i++;
	}
	printf("There are %d vowels in this name",vowel);
}
