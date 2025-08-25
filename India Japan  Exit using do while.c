#include<stdio.h>
int main()
{
	int choice;
	char ch;
	
	do
	{
		printf("1.India \n2.Japan \n3.Exit \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("-----INDIA----- \n");
				break;
				
			case 2:
				printf("-----JAPAN----- \n");
				break;
			
			case 3:
				printf("Are you sure you want to Exit Y/N \n");
				scanf("%s",&ch);
				break;
			       
		}
	}while(ch!='Y');
	printf("*****Thank You*****");
}
