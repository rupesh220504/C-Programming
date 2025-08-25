#include<stdio.h>
void add();
void sub();
void mul();
void div();

main()
{
	int n;
	printf("1.Add \n2.Sub \n3.Mul \n4.Div \nEnter Choice \n");
	scanf("%d",&n);
	if(n==1)
	{
		add();
	}
	else if(n==2)
	{
		sub();
	}
	else if(n==3)
	{
		mul();
	}
	else if(n==4)
	{
		div();
	}
}
void add()
{
	int n1,n2,n3;
	printf("Enter n1 and n2 \n");
	scanf("%d%d",&n1,&n2);
	n3=n1+n2;
	printf("Addition is %d \n",n3);
}
void sub()
{
	int n1,n2,n3;
	printf("Enter n1 and n2 \n");
	scanf("%d%d",&n1,&n2);
	n3=n1-n2;
	printf("Subtraction is %d \n",n3);
}
void mul()
{
	int n1,n2,n3;
	printf("Enter n1 and n2 \n");
	scanf("%d%d",&n1,&n2);
	n3=n1*n2;
	printf("Multiplication is %d \n",n3);
}
void div()
{
	int n1,n2,n3;
	printf("Enter n1 and n2 \n");
	scanf("%d%d",&n1,&n2);
	n3=n1/n2;
	printf("Division is %d \n",n3);
}

