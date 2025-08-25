#include<stdio.h>
int main()
{
	int choice,num,idli=0,dosa=0,wada=0,bill,total;
	char ch;
	
	do
	{
		printf("1.Idli 30/- \n2.Dosa 50/- \n3.Wada 40/- \n4.Exit \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("-----IDLI----- \n");
				printf("Enter No.of Plates \n");
				scanf("%d",&num);
				idli=num*30;
				printf("Order Placed \n");
				break;
				
			case 2:
				printf("-----DOSA----- \n");
				printf("Enter No.of Plates \n");
				scanf("%d",&num);
				dosa=num*50;
				printf("Order Placed \n");
				break;
				
			case 3:
				printf("-----Wada----- \n");
				printf("Enter No.of Plates \n");
				scanf("%d",&num);
				wada=num*40;
				printf("Order Placed \n");
				break;
			
			case 4:
				printf("Are you sure you want to Exit Y/N \n");
				scanf("%s",&ch);
				break;
			   
			default:
			printf("-----Invalid Input-----\n"); 
			
			   
		}
	}while(ch!='Y');
	total=idli+dosa+wada;
	printf("Total bill is Rs %d",total);

}
